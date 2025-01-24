#!/bin/bash

docker build -t rtk-rover-image .

docker run -p 8080:8000 rtk-rover-image 
