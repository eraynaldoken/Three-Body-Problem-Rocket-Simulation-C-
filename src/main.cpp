#include "vector.h"
#include "body.h"
#include "rocket.h"
#include "universe.h"
#include "canvas.cpp"

const double timestep = 0.01;

int main() {
    canvas graphic("gravity");
    graphic.startDoc();
    graphic.drawFrame();

    /* create three bodies with distinct mass and initial position & velocity */
    body m1(150, vector(400, 0), vector(0, 0.2));
    body m2(70, vector(0, 300), vector(-0.15, 0));
    body m3(150, vector(-200, -200), vector(0.1, -0.1));

    /* create a system and insert the bodies */
    universe U;
    U.insertBody(m1);
    U.insertBody(m2);
    U.insertBody(m3);

    for (int t = 0; t < 2000; t++) {
        U.run(timestep * 100); // run simulation for a while and draw last position

        graphic.drawPoint(U.getPosition(0).x, U.getPosition(0).y, "red");
        graphic.drawPoint(U.getPosition(1).x, U.getPosition(1).y, "green");
        graphic.drawPoint(U.getPosition(2).x, U.getPosition(2).y, "blue");
    }

    graphic.finishDoc();
    return 0;
}
