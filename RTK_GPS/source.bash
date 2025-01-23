#!/bin/bash

apt update

rosdep install --from-paths src --ignore-src -r -y

colcon build

source ./install/setup.bash
