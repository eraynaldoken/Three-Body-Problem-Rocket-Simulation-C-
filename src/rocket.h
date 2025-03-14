#ifndef ROCKET_H
#define ROCKET_H

#include "body.h"

class rocket : public body {
private:
    double exhaustVelocity, burnRate;

public:
    rocket(double mass, const vector& position, const vector& velocity,
           double exhaustVelocity, double burnRate);
    void update(const vector& netForce, double timestep) override;
};

#endif
