#ifndef VECTOR_H
#define VECTOR_H

class vector {
public:
    double x, y;

    vector(double x = 0, double y = 0);
    vector operator+(const vector& v) const;
    vector operator-(const vector& v) const;
    vector operator*(double scalar) const;
    double find_magnitude() const;
    vector get_normalized_vector() const;
};

#endif
