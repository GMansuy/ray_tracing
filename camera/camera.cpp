#include "Camera.hpp"

Camera::Camera( void ){}

Camera::~Camera(){}

std::ostream & operator<<( std::ostream &stream, Camera const &src )
{
    stream << "Camera : ";
    return stream;
}