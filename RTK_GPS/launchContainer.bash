#!/bin/bash

# Variables
CONTAINER_NAME="ros2_jazzy"
IMAGE_NAME="osrf/ros:jazzy-desktop-full"
WORKSPACE_DIR="$(pwd)"
DISPLAY_VAR=$DISPLAY

# Create the workspace if it doesn't exist
if [ ! -d "$WORKSPACE_DIR/src" ]; then
  echo "Creating ROS 2 workspace at $WORKSPACE_DIR"
  mkdir -p "$WORKSPACE_DIR/src"
fi

# Check if the container exists
if docker ps -a --format '{{.Names}}' | grep -q "^${CONTAINER_NAME}\$"; then
  echo "Starting existing container '$CONTAINER_NAME'..."
  docker start -ai "$CONTAINER_NAME"
else
  echo "Launching a new ROS 2 Jazzy container..."
  docker run -it  \
    --name "$CONTAINER_NAME" \
    -v "$WORKSPACE_DIR:/root/ros2_ws" \
    -e DISPLAY="$DISPLAY_VAR" \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    --network host \
    "$IMAGE_NAME" \
    bash
fi

