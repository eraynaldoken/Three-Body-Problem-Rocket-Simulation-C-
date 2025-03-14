#include "vector.h"
#include <cmath>

vector::vector(double x, double y) : x(x), y(y) {}

vector vector::operator+(const vector& v) const {
    return vector((x + (v.x)), (y + (v.y)));
}

vector vector::operator-(const vector& v) const {
    return vector((x - (v.x)), (y - (v.y)));
}

vector vector::operator*(double scalar) const {
    return vector(x * scalar, y * scalar);
}

double vector::find_magnitude() const {
    return std::sqrt((x * x) + (y * y));
}

vector vector::get_normalized_vector() const {
    double mag = find_magnitude();
    return vector((x / mag), (y / mag));
}
