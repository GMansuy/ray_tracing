#ifndef CAMERA_H
#define CAMERA_H

# include <iostream>
# include <stdexcept>
# include "../../utils/utils.hpp"
# include "../vector/Vector3.hpp"

// class Vector3;
// typedef Vector3 Point;

class Camera {
    public :

        Camera( void );
        virtual ~Camera( void );

    private :

        Vector3	horizontal;
        Vector3	vertical;
        Point	origin;
        Point	lower_left_corner;
        Point	light;
        float	fov;
        float	focal;
        Vector3	lookfrom;	
        Vector3	lookat;
        float	ratio;
        float	theta;
        float	h;
        Vector3	vup;
        Vector3	w;
        Vector3	u;
        Vector3	v;
        float	view_width;
        float	view_height;

};

std::ostream & operator<<( std::ostream &stream, Camera const &src );

#endif