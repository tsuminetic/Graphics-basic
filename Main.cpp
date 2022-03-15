#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main() {

	//initializing glfw
	glfwInit();

	//specifying the version
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	//creating a window
	GLFWwindow* wind = glfwCreateWindow(800, 800, "tsumi", NULL, NULL);
	glfwMakeContextCurrent(wind);

	//specifying the window port to glad
	gladLoadGL();
	glViewport(0, 0, 800, 800);

	//changing background color
	glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(wind);

	//getch() garya
	while (!glfwWindowShouldClose(wind)) {
		//window lai resize gareko input leko
		glfwPollEvents();
	}

	//sakkine bela garne kaam
	glfwDestroyWindow(wind);
	glfwTerminate();
	return 0;
}