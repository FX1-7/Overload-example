#pragma once
#include "Robot.h"
#include "Room.h"


class MyRobot :
    public Robot
{
public:
    
    //Constructor
    MyRobot(Room* room);

    // Functions
    void move(int);
    void back();
    void goTo(int, int);
    ~MyRobot();

private:
    Room* room;
};

