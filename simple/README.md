# Simple OpenGl program

## Setup GLFW and GLAD
1. Clone the project.
2. Install the GLEW. Clone the GLFW repo (https://github.com/glfw/glfw) and make install.
3. Download the GLAD (https://glad.dav1d.de/), copy the directory and file glad/glad.h and KHR/khrplatform.h to /usr/local/include.
4. Copy the glad.c to this repo.

## How to build the project
Create a build directory and use CMake
$ mkdir build && cd build
$ cmake .. && make && ./simple