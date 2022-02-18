#include <iostream>
#include "GraphicsManager.h"	

//Ponter reference to classes
Room* room;
Robot* robby;
GraphicsManager *picture;


int main()

{
	room = new Room(5);
	robby = new Robot();
	picture = new GraphicsManager(room, robby);

	// Speed of the render delay in milliseconds
	picture->setDrawDelay(1000);


			robby->move();
			picture->draw();

	
	std::cout << "hello"; //End of Instructions for Robby
	system ("Pause");
}