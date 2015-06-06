#ifndef MOTION_BASE_HPP
#define MOTION_BASE_HPP

struct DhParameter
{
public:
    float theta;
    float d;
    float length;
    float alpha;
};

// Do I need more than just angle ?
class JointState
{
public:
    float angle;
    float velocity;
};

class Point
{
public:
    float getX() const;
    float getY() const;
    float getZ() const;
};

Point && endPosition(const std::vector<DhParameter> &arm,
        const std::vector<JointState> &currentState);

std::vector<float> && jointVels(
        const std::vector<DhParameter> &arm,
        const Point &endVel);

#endif
