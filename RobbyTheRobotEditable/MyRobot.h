#pragma once
#include "Robot.h"
#include "Room.h"


class MyRobot :
    public Robot
{
public:
    //Pointers to robot class
    Room* room;

    //Constructor
    MyRobot();
    ~MyRobot();

    // Functions
    void move(int);
};

