
#include <utility>
#include <iostream>
#include <includes/window.h>
#include <includes/graphics.h>
Honassir::Graphics::Window::Window(int w, int h, std::string name):
	w(w), h(h), name(name){

}
void Honassir::Graphics::Window::init(){
	id = glfwCreateWindow(w, h, name.c_str(), NULL, NULL);
	if (!id){
		//TODO: errors
		std::cout << "window failed!\n";
		Graphics::terminate();
	}
}

void Honassir::Graphics::Window::destroy(){
	glfwDestroyWindow(id);
}

void Honassir::Graphics::Window::update(){
	glfwPollEvents();
}

bool Honassir::Graphics::Window::isClosed(){
	return glfwWindowShouldClose(id);
}
