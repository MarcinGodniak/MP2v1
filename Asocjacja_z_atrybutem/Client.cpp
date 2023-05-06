

#include "Client.h"
#include "Order.h"

namespace Asocjacja_z_atrybutem {

void Client::AddOrder(std::shared_ptr<Order> order)
{
    orders_.push_back(std::move(order));
}

const std::vector<std::shared_ptr<Order>>& Client::GetOrders() const
{
    return orders_;
}

}
