#include "Vector3.hpp"

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
    Vector3 v(x + target.getX(), y + target.getY(), z + target.getZ());
    return(v);
}
Vector3 Vector3::operator-(Vector3 const &target) const {
    Vector3 v(x - target.getX(), y - target.getY(), z - target.getZ());
    return(v);
}
Vector3 Vector3::operator*(Vector3 const &target) const {
    Vector3 v(x * target.getX(), y * target.getY(), z * target.getZ());
    return(v);
}
Vector3 Vector3::operator/(Vector3 const &target) const {
    Vector3 v(x / target.getX(), y / target.getY(), z / target.getZ());
    return(v);
}
Vector3 Vector3::operator*(const float t) const {
    Vector3 v(x * t, y * t, z * t);
    return(v);
}
