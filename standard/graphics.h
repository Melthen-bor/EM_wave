#ifndef FERRUM_GRAPHICS
#define FERRUM_GRAPHICS
#include "central_functions.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
namespace fer {
	typedef std::vector<GLuint> ids;
	typedef std::vector<std::string> names;
	struct Window {
		int width;
		int height;
		std::string name;
		GLFWwindow* window;
	};
	Window init_window(int width, int height, std::string name) {
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		return Window{ width,height,name,glfwCreateWindow(width,height,name.c_str(),NULL,NULL) };
	}
};
#endif
