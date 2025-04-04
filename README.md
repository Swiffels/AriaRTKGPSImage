# AriaRTKGPSImage
This github repo contains config files and plugin required for RTK GPS system.
It is wrapped in a docker container but the inside of it should contain everything needed.
Once the container is up you need to exec into it and then run the ros2 launch command given as:

ros2 launch ublox_gps RTK_GPS_BASE-launch.py

Then to check its current posititon run:

ros2 topic echo /gps/fix
