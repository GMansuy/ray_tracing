# include "../utils/include.hpp"

int main() {

    // Image

    float aspect_ratio = 16.0 / 9.0;
    int image_width = 400;

    int image_height = static_cast<int>(image_width / aspect_ratio);
    image_height = (image_height < 1) ? 1 : image_height;

    // Camera

    float focal_length = 1.0;
    float viewport_height = 2.0;
    float viewport_width = viewport_height * (static_cast<float>(image_width)/image_height);
    Point camera_center = Point(0, 0, 0);

    Vector3 viewport_u = Vector3(viewport_width, 0, 0);
    Vector3 viewport_v = Vector3(0, -viewport_height, 0);

    Point pixel_delta_u = viewport_u / image_width;
    Point pixel_delta_v = viewport_v / image_height;

    Point viewport_upper_left = camera_center
                             - Vector3(0, 0, focal_length) - viewport_u/2 - viewport_v/2;
    Point pixel00_loc = viewport_upper_left + (pixel_delta_u + pixel_delta_v) * 0.5;

    // Render

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; ++j) {
        std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i) {
           auto pixel_center = pixel00_loc + (pixel_delta_u * i) + (pixel_delta_v * j);
            auto ray_direction = pixel_center - camera_center;
            ray r(camera_center, ray_direction);

            Color pixel_color = ray_color(r);
            write_color(std::cout, pixel_color);
        }
    }
    std::clog << "\rDONE.                 \n\n";
}