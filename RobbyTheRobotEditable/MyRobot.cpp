#include "MyRobot.h"
#include "Robot.h"
#include "Room.h"

MyRobot::MyRobot(Room* room) {
	this->room = room;
}

void MyRobot::move(int n) {
	do {	
		if (Robot::obstacle_ahead(room)) {
			n = 0;
		}
		else {
			Robot::move();
			n = n - 1;
		}
	} while (n > 0);
}

void MyRobot::back() {
	Robot::right();
	Robot::right();
	if (Robot::obstacle_ahead(room)) {
		return;
	}
	else {
		Robot::move();
		Robot::right();
		Robot::right();
	}
}

void MyRobot::goTo(int x, int y) {
	//
}

MyRobot::~MyRobot() {
}
