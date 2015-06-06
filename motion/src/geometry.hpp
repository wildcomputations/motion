#ifndef MOTION_MOTION_GEOMETRY_H
#define MOTION_MOTION_GEOMETRY_H

#include <motion/base.hpp>

class Matrix4D
{
public:
    // identity
    Matrix4D(); 

    Matrix4D(const DhParameter& dhParam);
};

#endif
