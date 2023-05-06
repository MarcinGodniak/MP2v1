#pragma once

#include <vector>
#include <memory>

namespace Asocjacja_z_atrybutem {

class Order;

class Vehicle {
    std::vector<std::shared_ptr<Order>> orders_;
public:
    void AddOrder(std::shared_ptr<Order> cLient);
    const std::vector<std::shared_ptr<Order>>& GetOrders() const;
};

}

