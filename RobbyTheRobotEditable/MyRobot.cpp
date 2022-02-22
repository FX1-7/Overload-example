#include "MyRobot.h"
#include "Robot.h"
#include "Room.h"

MyRobot::MyRobot(Room* room) {
	this->room = room;
}

// Move a certain amount of squares 
void MyRobot::move(int n) {
	do {	
		// If the square ahead is an obstacle, don't move and stop the loop.
		if (Robot::obstacle_ahead(room)) {
			n = 0;
		}
		// If the square ahead is not an obstacle, move ahead and -1 to over all total.
		else {
			Robot::move();
			n = n - 1;
		}
	} while (n > 0);
}

// Move robby back a space
void MyRobot::back() {

	// Turns around to face behind.
	Robot::right();
	Robot::right();
	// checks if obstacle ahead
	if (Robot::obstacle_ahead(room)) {
		// if so turn around again and return.
		Robot::right();
		Robot::right();
		return;
	}
	// If no obstacle ahead, move forward and turn around to face forward again.
	else {
		Robot::move();
		Robot::right();
		Robot::right();
	}
}

// Go to certain square
void MyRobot::goTo(int x, int y) {
	// Checks if certain square is an obstacle. If so, return.
	if (room->isObstacle(x, y) == true) {
		return;
	}
	// If not an obstacle, go to the square.
	else {
		Robot::setX(x);
		Robot::setY(y);
	}
}

MyRobot::~MyRobot() {
}
