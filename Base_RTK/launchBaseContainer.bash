#!/bin/bash

docker build -t rtk-base-image .

docker run -p 8080:8000 rtk-base-image 
