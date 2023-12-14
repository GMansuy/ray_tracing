#include "Vector3.hpp"
#include "math.h"

Vector3::~Vector3(){}
Vector3::Vector3( void ) : x(0), y(0), z(0) {}
Vector3::Vector3(  float x , float y , float z  ) : 
x(x), y(y), z(z) {}



std::ostream & operator<<( std::ostream &stream, Vector3 const &src )
{
    stream << "x : " << src.getX() << " / y : " << src.getY() << " / z : " << src.getZ();
    return stream;
}

Vector3	&Vector3::operator=( Vector3 const &target ) {
    x = target.getX();
    y = target.getY();
    z = target.getZ();
    return *this;
}
Vector3	&Vector3::operator+=( Vector3 const &target ) {
    x += target.getX();
    y += target.getY();
    z += target.getZ();
    return *this;
}
Vector3	&Vector3::operator-=( Vector3 const &target ) {
    x -= target.getX();
    y -= target.getY();
    z -= target.getZ();
    return *this;
}
Vector3	&Vector3::operator*=( Vector3 const &target ) {
    x *= target.getX();
    y *= target.getY();
    z *= target.getZ();
    return *this;
}
Vector3	&Vector3::operator/=( Vector3 const &target ) {
    x /= target.getX();
    y /= target.getY();
    z /= target.getZ();
    return *this;
}
Vector3	&Vector3::operator*=( const float t) {
    x *= t;
    y *= t;
    z *= t;
    return *this;
}
Vector3	&Vector3::operator/=( const float t) {
    if (t == 0.000f)
        return *this;
    x /= t;
    y /= t;
    z /= t;
    return *this;
}

Vector3 Vector3::operator+(Vector3 const &target) const {
   return (Vector3(x + target.getX(), y + target.getY(), z + target.getZ()));
}
Vector3 Vector3::operator-(Vector3 const &target) const {
   return (Vector3(x - target.getX(), y - target.getY(), z - target.getZ()));
}
Vector3 Vector3::operator*(Vector3 const &target) const {
   return (Vector3(x * target.getX(), y * target.getY(), z * target.getZ()));
}
Vector3 Vector3::operator/(Vector3 const &target) const {
   return (Vector3(x / target.getX(), y / target.getY(), z / target.getZ()));
}
Vector3 Vector3::operator*(const float t) const {
   return (Vector3(x * t, y * t, z * t));
}
Vector3 Vector3::operator/(const float t) const {
   return (*this * (1 / t));
}

float   Vector3::dot(Vector3 const &target) const {
    return (x * target.getX() + y * target.getY() + z * target.getZ());
}

Vector3 Vector3::cross(Vector3 const &target) const {

   return (Vector3(
        y * target.getZ() - z * target.getY(),
        z * target.getZ() - x * target.getZ(),
        x * target.getY() - y * target.getZ()
    ));

}

float Vector3::length_squared() const {
    return (x * x + y * y + z * z);
}
float Vector3::length() const {
    return (sqrtf(this->length_squared()));
}
Vector3 Vector3::max(Vector3 const &target) const {
    if (this->length() > target.length())
        return (*this);
    else
        return (target);
}

Vector3 Vector3::unit_vector() const {
    if (this->length() == 0)
        return (Vector3());
    return (*this / this->length());
}

Vector3 Vector3::normalize() const {
    return (*this * (1 / this->norme()));
}
float Vector3::norme() const {
    return (sqrtf(this->dot(*this)));
}
