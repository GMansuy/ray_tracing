#ifndef VECTOR3_H
#define VECTOR3_H

# include <iostream>
# include <stdexcept>

class Vector3 {
    public :
        Vector3( void );
        Vector3( float x , float y , float z );
        virtual ~Vector3( void );

        float getX( void ) const {return x;};
        float getY( void ) const {return y;};
        float getZ( void ) const {return z;};
        
        Vector3 &operator=(Vector3 const &target);
        Vector3 &operator+=(Vector3 const &target);
        Vector3 &operator-=(Vector3 const &target);
        Vector3 &operator*=(Vector3 const &target);
        Vector3 &operator/=(Vector3 const &target);
        Vector3 &operator*=(const float t);
        Vector3 &operator/=(const float t);
        Vector3 operator+(Vector3 const &target) const;
        Vector3 operator-(Vector3 const &target) const;
        Vector3 operator*(Vector3 const &target) const;
        Vector3 operator/(Vector3 const &target) const;
        Vector3 operator*(const float t) const;
        Vector3 operator/(const float t) const;

        float   dot(Vector3 const &target) const;
        Vector3 cross(Vector3 const &target) const;

        float   length() const;
        float   length_squared() const;
        Vector3 max(Vector3 const &target) const;

        Vector3 unit_vector() const;
        Vector3 normalize() const;
        float   norme() const;

    private :
        float x;
        float y;
        float z;
};

using Point = Vector3;

std::ostream & operator<<( std::ostream &stream, Vector3 const &src );

inline float dot(const Vector3 &u, const Vector3 &v) {
    return u.getX() * v.getX()
         + u.getY() * v.getY()
         + u.getZ() * v.getZ();
}

inline Vector3 cross(const Vector3 &u, const Vector3 &v) {
    return Vector3(u.getY() * v.getZ() - u.getZ() * v.getY(),
                u.getZ() * v.getX() - u.getX() * v.getZ(),
                u.getX() * v.getY() - u.getY() * v.getX());
}

inline Vector3 unit_vector(Vector3 v) {
    return v / v.length();
}

#endif