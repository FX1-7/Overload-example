#include <iostream>
#include "GraphicsManager.h"	
#include "MyRobot.h"


int main()

{
	//Ponter reference to classes
	Room* room;
	MyRobot* robby;
	GraphicsManager* picture;

	room = new Room(2);
	robby = new MyRobot(room);
	picture = new GraphicsManager(room, robby);

	// Speed of the render delay in milliseconds
	picture->setDrawDelay(1000);

	picture->draw();
	robby->goTo(1, 12);
	picture->draw();


 	std::cout << "hello"; //End of Instructions for Robby
	system("Pause");
}