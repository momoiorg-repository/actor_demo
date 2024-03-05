FROM osrf/ros:humble-desktop-full
SHELL ["/bin/bash", "-c"]

RUN apt-get update && apt-get install -y --no-install-recommends \
 git python3-pip vim xterm less

#RUN apt-get update && apt install -y python3-colcon-common-extensions \
# ros-humble-py-trees ros-humble-py-trees-ros

RUN apt-get update && apt install -y python3-colcon-common-extensions

RUN pip3 install pyquaternion matplotlib transforms3d

RUN pip3 install -U numpy

# Create Colcon workspace with external dependencies
WORKDIR /
RUN mkdir -p /project/lib_ws/src
WORKDIR /project/lib_ws/src
COPY dependencies.repos .
RUN vcs import < dependencies.repos

# patch downloaded modules before build
WORKDIR /project/lib_ws/src/pymoveit2
COPY ./project/resource/pymoveit2_setup.py setup.py

WORKDIR /project/lib_ws/src/gazebo-pkgs/gazebo_grasp_plugin
COPY ./project/resource/grasp/CMakeLists.txt CMakeLists.txt
COPY ./project/resource/grasp/package.xml package.xml
WORKDIR /project/lib_ws/src/gazebo-pkgs/
RUN rm -r gazebo_test_tools gazebo_state_plugins gazebo_world_plugin_loader

# Build the base Colcon workspace, installing dependencies first.
WORKDIR /project/lib_ws
RUN source /opt/ros/${ROS_DISTRO}/setup.bash \
 && apt-get update -y \
 && rosdep install --from-paths src --ignore-src --rosdistro $ROS_DISTRO -y \
 && colcon build --symlink-install

WORKDIR /project
COPY ./project .
WORKDIR /root
COPY ./bin bin

WORKDIR /root

RUN echo "source /opt/ros/humble/setup.bash" >> .bashrc
RUN echo "source /project/lib_ws/install/setup.bash" >> .bashrc
RUN echo "source /usr/share/gazebo/setup.sh" >> .bashrc
RUN echo "export GAZEBO_PLUGIN_PATH=$GAZEBO_PLUGIN_PATH:/project/lib_ws/build/gazebo_grasp_plugin" >> .bashrc
RUN echo "export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp" >> .bashrc
RUN echo 'export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:/opt/ros/humble/share/turtlebot3_gazebo/models' >> .bashrc
RUN echo 'PATH=$PATH:/root/bin' >> .bashrc

RUN apt-get update && apt-get install -y --no-install-recommends \
 ros-humble-rmw-cyclonedds-cpp \
 ros-humble-gazebo-* ros-humble-navigation2 \
 ros-humble-nav2-bringup

RUN apt-get update && apt-get install -y --no-install-recommends \
 ros-humble-dynamixel-sdk ros-humble-ros2-control ros-humble-ros2-controllers \
 ros-humble-gripper-controllers ros-humble-moveit

