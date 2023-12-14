#!/bin/bash

make && ./output > image.ppm && ffmpeg -y -i image.ppm image.png -hide_banner -loglevel error && rm image.ppm && rm output && xdg-open image.png ;
make fclean ;