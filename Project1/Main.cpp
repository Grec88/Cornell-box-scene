#include "Main.h"

int main(int argc, char* argv[]) {
	SDL_Window* main_window;
	init(main_window);

	SDL_Event Event;
	while (true) {
		glClearColor(0, 0, 1, 1);
		glClear(GL_COLOR_BUFFER_BIT);
		glFlush();

		while (SDL_PollEvent(&Event)) {

			SDL_GL_SwapWindow(main_window);
		}
	}
	return 0;
}