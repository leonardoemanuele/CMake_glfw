#include <iostream>
#include <GLFW/glfw3.h>
#include <ProjectNameConfig.h>

#ifdef USE_ADDER
#include <adder.h>
#endif

int main(int argc, char *argv[])
{
  std::cout << "QUANTO FA 15 + 18!?!" << std::endl;
#ifdef USE_ADDER
  std::cout << "USING ADDER: " << add(15.3f, 18.4f) << std::endl;
#else
  std::cout << "NOT USING 'Adder' Library: Ah, non lo so io..." << std::endl;
#endif

  // Output Version
  std::cout << argv[0] << " Version " << ProjectName_VERSION_MAJOR << "." << ProjectName_VERSION_MINOR << std::endl;

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
  // exit(EXIT_SUCCESS);

  return 0;
}