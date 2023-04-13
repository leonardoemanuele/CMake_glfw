#include <iostream>
#include <adder.h>
#include <GLFW/glfw3.h>

int main()
{
  std::cout << "QUANTO FA 15 + 18!?!" << std::endl;

  std::cout << add(15.3f, 18.4f) << std::endl;

  GLFWwindow *window;
  if (!glfwInit())
  {
    fprintf(stderr, "Failed to initialize GLFW\n");
    exit(EXIT_FAILURE);
  }

  window = glfwCreateWindow(300, 300, "Gears", NULL, NULL);
  if (!window)
  {
    fprintf(stderr, "Failed to open GLFW window\n");
    glfwTerminate();
    exit(EXIT_FAILURE);
  }

  // Main loop
  while (!glfwWindowShouldClose(window))
  {

    // Swap buffers
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  // Terminate GLFW
  glfwTerminate();

  // Exit program
  exit(EXIT_SUCCESS);

  return 0;
}