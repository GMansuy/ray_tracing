# ifndef INCLUDE_HPP
# define INCLUDE_HPP

# include "../class/vector/Vector3.hpp"
# include "../class/camera/Camera.hpp"
# include "../utils/utils.hpp"
# include "../class/Ray.hpp"
# include <iostream>
# include <math.h>

Color ray_color(ray r);
void write_color(std::ostream &out, Color pixel_color);

float hit_sphere(const Point& center, double radius, const ray& r);

# endif