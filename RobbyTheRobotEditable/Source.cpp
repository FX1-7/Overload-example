#include <iostream>
#include "GraphicsManager.h"	
#include "MyRobot.h"

//Ponter reference to classes
Room* room;
MyRobot* robby;
GraphicsManager* picture;


int main()

{
	room = new Room(2);
	robby = new MyRobot();
	picture = new GraphicsManager(room, robby);

	// Speed of the render delay in milliseconds
	picture->setDrawDelay(1000);

	picture->draw();
	robby->move(5);
	picture->draw();
	robby->move(5);
	picture->draw();


 	std::cout << "hello"; //End of Instructions for Robby
	system("Pause");
}