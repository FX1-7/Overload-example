#include "MyRobot.h"
#include "Robot.h"
#include "Room.h"

MyRobot::MyRobot() {
	//Sets room pointer
	this->room = room;
}

void MyRobot::move(int n) {
	do {	
		if (Robot::ahead_is_colour(room, 2)) {
			n = 0;
		}
		else {
			Robot::move();
			n = n - 1;
		}
	} while (n > 0);
}


MyRobot::~MyRobot() {
}
