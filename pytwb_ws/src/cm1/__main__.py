from pytwb import lib_main

lib_main.initialize()
package = lib_main.get_package().name
exec(f'from {package} import app_main') 
app_main.main()