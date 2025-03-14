#include "universe.h"
#include <cmath>

universe::universe() {}

void universe::insertBody(body& b) {
    bodies.push_back(&b);
}

void universe::run(double timestep) {
    std::vector<vector> forces(bodies.size());
    for (size_t i = 0; i < bodies.size(); ++i) {
        vector netForce(0, 0);
        for (size_t j = 0; j < bodies.size(); ++j) {
            if (i == j) continue;
            vector diff = bodies[j]->getPosition() - bodies[i]->getPosition();
            double distance = diff.find_magnitude();
            double forceMagnitude = (bodies[i]->getMass() * bodies[j]->getMass()) / (distance * distance);
            netForce = netForce + diff.get_normalized_vector() * forceMagnitude;
        }
        forces[i] = netForce;
    }

    for (size_t i = 0; i < bodies.size(); ++i) {
        bodies[i]->update(forces[i], timestep);
    }
}

vector universe::getPosition(int index) const {
    return bodies[index]->getPosition();
}
