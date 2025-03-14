# Three-Body Problem & Rocket Simulation (C++)

This project is a **Three-Body Problem & Rocket Simulation** implemented in C++. It models celestial body interactions and rocket trajectories using Newtonian physics and object-oriented programming.

## Features

- **Three-Body Problem Simulation**: Models gravitational interactions between celestial bodies.
- **Rocket Simulation**: Tracks rocket thrust, fuel consumption, and trajectory.
- **Object-Oriented Design**: Modular C++ classes for bodies, vectors, and physics.
- **Graphical Representation**: Visualizes motion using a canvas.

## Modules

- **Vector Module (`vector`)**: Handles 2D vector calculations.
- **Body Module (`body`)**: Represents celestial objects with mass, position, and velocity.
- **Rocket Module (`rocket`)**: Inherits from `body`, adding thrust and fuel mechanics.
- **Universe Module (`universe`)**: Governs interactions between bodies and rockets.
- **Canvas Module (`canvas`)**: Provides graphical representation of movement.

## Simulation & Visualization

- **Gravitational Dynamics**: Uses Newton's laws to update body positions.
- **Rocket Physics**: Simulates fuel consumption and thrust force.
- **Graphical Output**: Displays orbits and trajectories using a coordinate grid.

## Installation

1. **Compile the Project**:
   ```sh
   g++ -std=c++17 main.cpp -o simulation
   ```
2. **Run the Simulation**:
   ```sh
   ./simulation
   ```
3. **View the Results**: The motion of bodies and rockets is visualized.

## License

This project is open-source. Feel free to modify and expand.

