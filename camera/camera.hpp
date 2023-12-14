#ifndef CAMERA_H
#define CAMERA_H

# include <iostream>
# include <stdexcept>

class Camera {
    public :
        Camera( void );
        virtual ~Camera( void );
    private :

};

std::ostream & operator<<( std::ostream &stream, Camera const &src );

#endif