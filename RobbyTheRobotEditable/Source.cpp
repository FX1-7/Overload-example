#include <iostream>
#include "GraphicsManager.h"	
#include "MyRobot.h"

using namespace std;


int main()

{
	//Ponter reference to classes
	Room* room;
	MyRobot* robby;
	GraphicsManager* picture;

	room = new Room(0);
	robby = new MyRobot(room);
	picture = new GraphicsManager(room, robby);

	// Speed of the render delay in milliseconds
	picture->setDrawDelay(1000);

	picture->draw();
	// Moves forward 5 spaces
	robby->move(5);
	picture->draw();
	// Moves back a space
	robby->back();
	picture->draw();
	// Moves to x = 3 y = 12.
	robby->goTo(3, 12);
	picture->draw();

	cout << endl;
	cout << "Finished!" << endl;

	system("Pause");
}