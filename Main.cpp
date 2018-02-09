#include <SDL.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include "ImageConverter.h"
#include "HelperFunctions.h"

using namespace std;

#ifdef main
#undef main
#endif

int main(int argc, char * argv[])
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		cout << "SDL initialization failed. SDL Error: " << SDL_GetError() << endl;
	}

	atexit(SDL_Quit);

	string filename;

	bool isProgramToBeClosed = false;
	while (!isProgramToBeClosed)
	{
		validateFilename(filename);
		ImageConverter converter(filename.c_str());

		char paletteChoice;
		choosePalette(paletteChoice);

		char saveOptionChoice;
		bool isAveragePredictorChosen = false;
		chooseSaveOption(saveOptionChoice, isAveragePredictorChosen);

		// message processing loop
		SDL_Event event;
		bool isEventFired = false;
		while (!isEventFired)
		{
			while (SDL_PollEvent(&event))
			{
				// check for messages
				switch (event.type)
				{
					// exit if the window is closed
				case SDL_QUIT:
				{
					isEventFired = true;
					isProgramToBeClosed = true;
					break;
				}
				// check for keypresses
				case SDL_KEYDOWN:
				{
					// exit if ESCAPE is pressed
					if (event.key.keysym.sym == SDLK_ESCAPE)
					{
						isEventFired = true;
						isProgramToBeClosed = true;
					}
					else if (event.key.keysym.sym == SDLK_n)
					{
						isEventFired = true;
					}
					break;
				}
				}
			}
		}
	}

	return 0;
}