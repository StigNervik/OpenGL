#include <stdio.h>
#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

const GLint WIDTH = 800;
const GLint HEIGHT = 600;

int main()
{

  if (!glfwInit())
  {
    std::cout << "GLFW initialization failed!" << std::endl;
    glfwTerminate();
    return 1;
  }

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
  GLFWwindow *mainWindow = glfwCreateWindow(WIDTH, HEIGHT, "OpenGL", NULL, NULL);

  if (!mainWindow)
  {
    std::cout << "Failed to create GLFW window" << std::endl;
    glfwTerminate();
    return 1;
  }

  int bufferWidth;
  int bufferHeight;
  glfwGetFramebufferSize(mainWindow, &bufferWidth, &bufferHeight);
  glfwMakeContextCurrent(mainWindow);
  glewExperimental = GL_TRUE;

  if (glewInit() != GLEW_OK)
  {
    std::cout << "GLEW initialization failed" << std::endl;
    glfwDestroyWindow(mainWindow);
    glfwTerminate();
    return 1;
  }

  glViewport(0, 0, bufferWidth, bufferHeight);

  while (!glfwWindowShouldClose(mainWindow))
  {
    glfwPollEvents();

    glClearColor(1.0f, 1.0f, 0.0f, 0.7f);
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(mainWindow);
  }

  return 0;
}