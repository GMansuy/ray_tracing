#ifndef RAY_H
#define RAY_H

#include "vector/Vector3.hpp"

class ray {
  public:
    ray() {}

    ray(const Point& origin, const Vector3& direction) : orig(origin), dir(direction) {}

    Point origin() const  { return orig; }
    Vector3 direction() const { return dir; }

    Point at(double t) const {
        return orig + dir * t;
    }

  private:
    Point orig;
    Vector3 dir;
};

#endif