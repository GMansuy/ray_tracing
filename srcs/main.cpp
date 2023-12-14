# include "../class/vector/Vector3.hpp"
# include "../class/camera/Camera.hpp"
# include "../utils/color.hpp"
# include "../utils/utils.hpp"
# include <iostream>

int main() {

    // Render

    std::cout << "P3\n" << WINDOW_W << ' ' << WINDOW_H << "\n255\n";

    for (int j = 0; j < WINDOW_H; ++j) {
        std::clog << "\rScanlines remaining: " << (WINDOW_H - j) << ' ' << std::flush;
        for (int i = 0; i < WINDOW_W; ++i) {
            Color pixel_color = Color(double( i ) / (WINDOW_W - 1), double ( j ) / ( WINDOW_H - 1), 0);
            write_color(std::cout, pixel_color);
        }
    }
    std::clog << "\rDone.                 \n";
}