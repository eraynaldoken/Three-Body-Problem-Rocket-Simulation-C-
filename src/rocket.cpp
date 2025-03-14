#include "rocket.h"

rocket::rocket(double mass, const vector& position, const vector& velocity,
               double exhaustVelocity, double burnRate)
    : body(mass, position, velocity),
      exhaustVelocity(exhaustVelocity), burnRate(burnRate) {}

void rocket::update(const vector& netForce, double timestep) {
    if (mass > 0) {
        double thrust = exhaustVelocity * burnRate;
        vector thrustForce(0, thrust); 
        vector totalForce = netForce + thrustForce;
        mass -= burnRate * timestep;
        if (mass < 0) mass = 0;
        body::update(totalForce, timestep);
    }
}
