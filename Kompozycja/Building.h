#ifndef MP2_BUILDING_H
#define MP2_BUILDING_H

#include <memory>
#include <vector>

class Room;

class Building
{
private:
    std::vector<Room*> rooms_;
public:
    void AddRoom(Room* room);
};


#endif //MP2_BUILDING_H
