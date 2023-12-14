#include "Camera.hpp"
#include "../vector/Vector3.hpp"
#include "math.h"

Camera::Camera( void ) {

    ratio = (double)WINDOW_W / (double) WINDOW_H;
    fov = 100.0f;
    theta = fov * M_PI / 180.0f;
    h = tan(theta / 2);
    view_height = 2.0 * h;
    view_width = ratio * view_height;

}

Camera::~Camera(){}

std::ostream & operator<<( std::ostream &stream, Camera const &src )
{
    stream << "Camera : ";
    return stream;
}