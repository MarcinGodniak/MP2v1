#include "Vehicle.h"
#include "Client.h"
#include "Order.h"

namespace Asocjacja_kwalifikowana {

void Vehicle::AddOrder(std::shared_ptr<Order> order) {
    orders_.insert(std::make_pair(order->getId(), std::move(order)));
}

const std::map<std::uint64_t, std::shared_ptr<Order>>& Vehicle::GetOrders() const
{
    return orders_;
}

}

