#pragma once

#include <map>
#include <memory>
#include <cstdint>

namespace Asocjacja_kwalifikowana {

class Order;

class Client {
    std::map<std::uint64_t, std::shared_ptr<Order>> orders_;
public:
    void AddOrder(std::shared_ptr<Order> vehicle);

    const std::map<std::uint64_t, std::shared_ptr<Order>>& GetOrders() const;
};
}
