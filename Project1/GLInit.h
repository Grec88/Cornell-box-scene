#ifndef GLINIT_H
#define GLINIT_H

#include <iostream>
#include "SDL.h"
#include "glew.h"

void init(SDL_Window*& window);

void initGLAttributes(int glMajorVersion, int glMinorVersion, int useDoubleBuffering);

#endif
