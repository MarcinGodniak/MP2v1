#ifndef MP2_ROOM_H
#define MP2_ROOM_H

#include <memory>

class Building;

class Room {
public:
    static Room* MakeRoom(Building* building, double size);

private:
    explicit Room(double size);
    Building* building_;
    double size_;
};


#endif //MP2_ROOM_H
