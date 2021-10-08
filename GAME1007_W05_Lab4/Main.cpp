#include <iostream>
using namespace std;

// int Run(); // Function prototype.

// Init function. Sets up SDL and all subsystems and other (dynamic) memory allocation.
void Init()
{
	cout << "Initializing game..." << endl;
}

// HandleEvents function. Gets input from user, e.g. mouse/keyboard/gamepad events.
void HandleEvents()
{
	cout << "Getting input..." << endl;
}

// Update function. Moves objects, performs physics, e.g. projectiles, gravity, collisions.
void Update()
{
	cout << "Updating game..." << endl;
}

// Render function. Renders changes in game objects to window.
void Render()
{
	cout << "Rendering changes to window..." << endl;
}

// Clean function. De-initialize SDL and de-allocate memory.
void Clean()
{
	cout << "Cleaning up..." << endl;
}

// Run function. Contains the primary game loop.
int Run()
{
	bool isRunning = true;
	char input;

	Init();
	while (isRunning) // Primary game loop. "frame"
	{
		HandleEvents(); // Input.
		Update(); // Processing.
		Render(); // Output.
		cout << "Do you want to quit? [y/n]: ";
		cin >> input;
		if (input == 'y')
			isRunning = false;
	}
	Clean();
	return 0;
}

// main function. Entry point in every C++ program.
int main()
{
	return Run();
}

