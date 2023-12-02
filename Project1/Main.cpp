#include "Main.h"

int main(int argc, char* argv[]) {
	SDL_Window* main_window;
	init(main_window);

	Model model;
	Camera camera;
	View view(model, camera);
	Control control(model, view);

	const double dt = 10;
	double accumulatedTime = 0.0;
	double lastTime = SDL_GetTicks();
	double currentTime;

	while (true) {

		currentTime = SDL_GetTicks();
		accumulatedTime += currentTime - lastTime;
		lastTime = currentTime;

		control.handleInput();

		while (accumulatedTime > dt) {
			accumulatedTime -= dt;
		}

		view.render(main_window);
	}

	tearDown(main_window);
	return 0;
}