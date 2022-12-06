#### HARI DOCKER FILE  #############
# importing cuda nvidia runtime
# requirements docker cuda runtime

# importing base image
FROM nvidia/cuda:11.4.0-cudnn8-devel-ubuntu20.04
FROM ros:noetic-ros-base
ENV DEBIAN_FRONTEND noninteractive

# updating and installing basic modules and python
RUN apt-get update && apt-get install -y python3 python3-pip git pkg-config libopencv-dev
RUN apt install nano
# adding docker user
#RUN useradd -m socks
#RUN chown -R socks:socks /home/socks/

# Copying current dockerfile dir to container directry
COPY . /home/socks/scripts/

# Installing the requirements.txt
#USER socks
RUN cd /home/socks/scripts/ && pip install -r requirements.txt 

# Mapping the host volume to container

# Changing working directory
WORKDIR /home/socks/scripts


