# Minidrone Project - Mambo Drone
This repo contains the project files for a mini drone project meant for the parrot mambo minidrone. It contains simulations and development in MATLAB R2024a. 
# Progress
- [x] Dynamic path planning and correction. Can handle unspecified angles.
    - [x] Turning 
    - [x] Forward motion wrt to the direction of it's nose
- [x] Landing 
    - [x] Stabilization
    - [x] Search for Landing
    - [x] Detect Landing
- [x] Fail safe to land if it goes off path

> [!NOTE]
> Landing only works with sufficient space between landing circle and end of track. Otherwise it will backtrack the path till time runs out.

