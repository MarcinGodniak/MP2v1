
#include "Vehicle.h"
#include "Client.h"

namespace Asocjacja_z_atrybutem {


void Vehicle::AddOrder(std::shared_ptr<Order> order) {
    orders_.push_back(std::move(order));
}

const std::vector<std::shared_ptr<Order>>& Vehicle::GetOrders() const
{
    return orders_;
}


}

