#include "body.h"

body::body(double mass, const vector& position, const vector& velocity)
    : mass(mass), position(position), velocity(velocity) {}

void body::update(const vector& netForce, double timestep) {
    vector acceleration = netForce * (1.0 / mass);
    velocity = velocity + acceleration * timestep;
    position = position + velocity * timestep;
}

vector body::getPosition() const {
    return position;
}

double body::getMass() const {
    return mass;
}
