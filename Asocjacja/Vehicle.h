#pragma once


#include <vector>
#include <memory>

namespace Asocjacja {


class Client;

class Vehicle {
    std::vector<std::shared_ptr<Client>> past_clients_;
public:
    void AddClient(std::shared_ptr<Client> cLient);
};

}

