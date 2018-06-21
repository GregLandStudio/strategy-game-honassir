#include <includes/graphics.h>
#include <iostream>
#include <GLFW/glfw3.h>

int Honassir::Graphics::init(){
	if (!glfwInit()){
		//TODO: errors
		std::cout << "glfw initialisation failed!\n";
		return -1;
	}
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	return 0;
}

void Honassir::Graphics::terminate(){
	glfwTerminate();
}
