# include "../utils/include.hpp"

Color ray_color(ray r) {
    float hit = hit_sphere(Point(0, 0, -1), 0.6, r);
    
    if (hit > 0.0) {
        Vector3 N = unit_vector(r.at(hit) - Vector3(0,0,-1));
        return Color(N.getX() + 1, N.getY() + 1, N.getZ() + 1) * 0.5 ;
    }

    Vector3 unit_direction = r.direction().unit_vector();
    auto a = 0.5 * ( unit_direction.getY() + 1.0 );
    return  Color(1.0, 1.0, 1.0) * ( 1.0 - a ) + Color(0.5, 0.7, 1.0) * a;
}

void write_color(std::ostream &out, Color pixel_color) {
    out << static_cast<int>(255.999 * pixel_color.getX()) << ' '
        << static_cast<int>(255.999 * pixel_color.getY()) << ' '
        << static_cast<int>(255.999 * pixel_color.getZ()) << '\n';
}
