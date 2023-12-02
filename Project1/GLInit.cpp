#include "GLInit.h"

void init(SDL_Window*& window) {
	SDL_Init(SDL_INIT_EVERYTHING);
	initGLAttributes(3, 3, 1);
	window = SDL_CreateWindow("Hello Window", 20, 40, 600, 600, SDL_WINDOW_OPENGL);
	if (window == NULL) {
	std::cout << "Failed to create window at startup";
	}
	SDL_GL_CreateContext(window);
	SDL_GL_SetSwapInterval(1);

	glewExperimental = GL_TRUE;
	glewInit();
}

void initGLAttributes(int glMajorVersion, int glMinorVersion, int useDoubleBuffering) {
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, glMajorVersion);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, glMinorVersion);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, useDoubleBuffering);
}

void tearDown(SDL_Window*& window) {
	SDL_GL_DeleteContext(window);
	SDL_DestroyWindow(window);

	SDL_Quit();
}