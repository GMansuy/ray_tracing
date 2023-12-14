#ifndef COLOR_H
#define COLOR_H

#include "../class/vector/Vector3.hpp"

#include <iostream>

using Color = Vector3;

void write_color(std::ostream &out, Color pixel_color) {
    out << static_cast<int>(255.999 * pixel_color.getX()) << ' '
        << static_cast<int>(255.999 * pixel_color.getY()) << ' '
        << static_cast<int>(255.999 * pixel_color.getZ()) << '\n';
}

#endif