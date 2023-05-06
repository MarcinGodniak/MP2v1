#include <iostream>
#include <memory>
#include "Asocjacja/Client.h"
#include "Asocjacja/Vehicle.h"

#include "Asocjacja_z_atrybutem/Client.h"
#include "Asocjacja_z_atrybutem/Vehicle.h"
#include "Asocjacja_z_atrybutem/Order.h"

#include "Asocjacja_kwalifikowana/Client.h"
#include "Asocjacja_kwalifikowana/Vehicle.h"
#include "Asocjacja_kwalifikowana/Order.h"


int main() {
    //asocjacja
    {
        using namespace Asocjacja;
        auto client = std::make_shared<Client>();
        auto vehicle = std::make_shared<Vehicle>();

        vehicle->AddClient(client);
    }

    //asocjacja_z_atrybutem
    {
        using namespace Asocjacja_z_atrybutem;
        auto client = std::make_shared<Client>();
        auto vehicle = std::make_shared<Vehicle>();
        auto order = Order::MakeOrder(client, vehicle, std::chrono::steady_clock::now());
        std::cout << std::boolalpha <<(client->GetOrders().front()->getClient() == client) << std::endl;
    }

    //asocjacja_z_kwalifikowana
    {
        using namespace Asocjacja_kwalifikowana;
        auto client = std::make_shared<Client>();
        auto vehicle = std::make_shared<Vehicle>();
        auto order = Order::MakeOrder(client, vehicle, std::chrono::steady_clock::now());
        std::cout << std::boolalpha <<(client->GetOrders().begin()->second->getClient() == client) << std::endl;
    }



    return 0;
}
