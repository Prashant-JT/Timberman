// Include libraries 
#include <SFML/Graphics.hpp>
// Make code easier to type with "using namespace"
using namespace sf;

// This is where our game starts from
int main()
{
	VideoMode vm(1920, 1080); // Create a video mode object
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen); // Create and open a window for the game
	Texture textureBackground; // Create a texture to hold a graphic on the GPU
	textureBackground.loadFromFile("graphics/background.png"); // Load a graphic into the texture
	Sprite spriteBackground; // Create a sprite
	spriteBackground.setTexture(textureBackground); // Attach the texture to the sprite
	spriteBackground.setPosition(0, 0); // Set the spriteBackground to cover the screen

	while (window.isOpen())
	{
		// Handle the players input
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}

		// Update the scene

		window.clear(); // Clear everything from the last frame
		
		// Draw our game scene here
		window.draw(spriteBackground);

		window.display(); // Show everything we just drew
	}
	return 0;
}