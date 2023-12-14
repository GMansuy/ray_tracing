# include "vector/vector3.hpp"

int main() {

    Vector3 v(2.6f, 3.2f, 5.0f);
    Vector3 u(5.6f, 8.2f, 15.0f);
    u += v;
    std::clog << "u = " << u << std::endl;

    return 0;
}