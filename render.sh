#!/bin/bash

make && ./rt > image.ppm && ffmpeg -y -i image.ppm image.png -hide_banner -loglevel error && rm image.ppm && rm rt && xdg-open image.png ;
make fclean ;