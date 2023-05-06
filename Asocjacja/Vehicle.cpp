#include "Vehicle.h"
#include "Client.h"

namespace Asocjacja {


void Vehicle::AddClient(std::shared_ptr<Client> cLient) {
    past_clients_.push_back(std::move(cLient));
}


}

