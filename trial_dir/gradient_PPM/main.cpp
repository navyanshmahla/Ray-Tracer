#include <iostream>
#include "../../HEADERS/SDLTemplate/sdltemplate.h"

int main() {
    // image 
	int width = 256;
	int height = 256;

	std::cout << "P3\n" << width << " " << height << "\n255\n";

    //rendering 
	sdltemplate::sdl("Ray Tracer", width, height);
	sdltemplate::loop();

	for(int y=height-1; y>=00; y--) {
		for(int x=0; x<width; x++) {
			float r = float(x) / float(width);
			float g = float(y) / float(height);
			float b = 0.5;

			int ir = int(255.99*r);
			int ig = int(255.99*g);
			int ib = int(255.99*b);

			std::cout << ir << " " << ig << " " << ib << "\n";

			sdltemplate::setDrawColor(sdltemplate::createColor(ir,ig,ib,255));
			sdltemplate::drawPoint(x,height-y);
		}
	}

	while(sdltemplate::running) {
		sdltemplate::loop();
	}
}

