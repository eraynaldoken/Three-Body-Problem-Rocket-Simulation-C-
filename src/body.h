#ifndef BODY_H
#define BODY_H

#include "vector.h"

class body {
protected:
    double mass;
    vector position, velocity;

public:
    body(double mass, const vector& position, const vector& velocity);
    virtual void update(const vector& netForce, double timestep);
    vector getPosition() const;
    double getMass() const;
};

#endif
