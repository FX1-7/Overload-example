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

    // Deconstructor
    ~MyRobot();

private:
    // Pointer to room.
    Room* room;
};

