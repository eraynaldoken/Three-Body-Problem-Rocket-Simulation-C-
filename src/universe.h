#ifndef UNIVERSE_H
#define UNIVERSE_H

#include <vector>
#include "body.h"

class universe {
private:
    std::vector<body*> bodies;

public:
    universe();
    void insertBody(body& b);
    void run(double timestep);
    vector getPosition(int index) const;
};

#endif
