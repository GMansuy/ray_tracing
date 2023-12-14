#!/bin/bash

g++ output.cpp -o output
./output.exe > image.ppm
ffmpeg -i image.ppm image.png
rm image.ppm
rm output.exe
xdg-open image.png