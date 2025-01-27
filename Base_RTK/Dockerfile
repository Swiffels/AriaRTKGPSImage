# Use the official ROS2 base image
FROM osrf/ros:jazzy-desktop-full

# Set the working directory
WORKDIR /workspace

# Install necessary dependencies for building ROS2 packages
# Update and install additional required packages
RUN apt-get update && apt-get install -y \
    python3-colcon-common-extensions \
    build-essential \
    python3-pip \ 
    libasio-dev \
    ros-jazzy-diagnostic-updater \
    && rm -rf /var/lib/apt/lists/*

# Source ROS2 setup bash script
SHELL ["/bin/bash", "-c"]
RUN echo "source /opt/ros/jazzy/setup.bash" >> ~/.bashrc

# Copy the entire source code into the container
COPY ./src ./src

# Ensure you install any dependencies using rosdep
RUN apt-get update && rosdep update
RUN rosdep install --from-paths src --ignore-src -r -y

# Build the workspace using colcon
RUN . /opt/ros/jazzy/setup.bash && colcon build --symlink-install

# Set environment variables for ROS2
ENV ROS_DISTRO=jazzy
ENV COLCON_HOME=/workspace

# Source the workspace setup script automatically
RUN echo "source /workspace/install/setup.bash" >> ~/.bashrc
RUN . ~/.bashrc

# Set the default command to run when the container starts
CMD ["bash", "-c", "source /workspace/install/setup.bash && ros2 launch ublox_gps ublox_gps_node_zedf9p-launch.py"]
