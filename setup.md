apt-get update && apt-get install -y \
    python3-colcon-common-extensions \
    build-essential \
    python3-pip \
    libasio-dev \
    ros-jazzy-diagnostic-updater \
    && rm -rf /var/lib/apt/lists/*

source ./install/setup.bash

apt-get update && rosdep update

rosdep install --from-paths src --ignore-src -r -y

colcon build --symlink-install

ros2 launch ublox_gps RTK_GPS_BASE-launch.py
ros2 launch ublox_gps RTK_GPS_ROVER-launch.py