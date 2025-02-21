#include <iostream>
#include <cmath>
struct point{
    double x,y,z;
    point(double x, double y, double z) : x(x), y(y), z(z) {}
    double distance(const point& other) const {
        return std::sqrt(std::pow(x - other.x,2) +
                         std::pow(y - other.y,2) +
                         std::pow(z - other.z,2));
    }
}: