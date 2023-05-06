#include "Room.h"

Room* Room::MakeRoom(Building* building, double size) {
    auto room = new Room(size);
    room->building_ = building;
    return room;
}

Room::Room(double size)
: size_(size)
{
}
