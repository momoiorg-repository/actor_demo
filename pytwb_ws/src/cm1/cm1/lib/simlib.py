import cv2
import numpy as np

#
## find_coke is derived from
##  lecture page https://demura.net/education/22777.html
##  by Demura Kosei
#
def find_coke(image):
  # RGB表色系からHSV表色系に変換
  hsv_image = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)

  # しきい値の設定（ここでは赤を抽出）
  color_min = np.array([150,100, 50])
  color_max = np.array([180,255,255])

  # マスク画像を生成
  color_mask = cv2.inRange(hsv_image, color_min, color_max);
  # 画像配列のビット毎の倫理積席。マスク画像だけが抽出される。
  cv_image2  = cv2.bitwise_and(image, image, mask = color_mask)

  # 重心を求める。moments関数を使うためグレースケール画像へ変換。
  gray_image2 = cv2.cvtColor(cv_image2, cv2.COLOR_BGR2GRAY)
  mu = cv2.moments(gray_image2, True)
  if mu["m00"] == 0: # マスクをかけた画像がない場合(ここでは赤）の処理
    return None
  else:
    return (
      int(mu["m10"]/mu["m00"]),
      int(mu["m01"]/mu["m00"])
    )

