#include <random>
#include "Order.h"

namespace Asocjacja_kwalifikowana {
std::shared_ptr<Order> Order::MakeOrder(std::shared_ptr<Client> client, std::shared_ptr<Vehicle> vehicle, time_type start_date, std::optional<time_type> end_date )
{
    auto order = std::shared_ptr<Order>(new Order(client, vehicle, start_date, end_date));
    order->id_ = create_id();
    client->AddOrder(order);
    vehicle->AddOrder(order);
    return order;
}



Order::Order(std::shared_ptr<Client> client, std::shared_ptr<Vehicle> vehicle, time_type start_date,
             std::optional<time_type> end_date)
        :client_(std::move(client))
        , vehicle_(std::move(vehicle))
        , start_date_(std::move(start_date))
        , end_date_(std::move(end_date))
{

}

std::uint64_t Order::create_id()
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<> distrib(0, std::numeric_limits<std::uint64_t>::max());
    return distrib(gen);
}

const std::shared_ptr<Client> &Order::getClient() const {
    return client_;
}

const std::shared_ptr<Vehicle> &Order::getVehicle() const {
    return vehicle_;
}

const Order::time_type &Order::getStartDate() const {
    return start_date_;
}

const std::optional<Order::time_type> &Order::getEndDate() const {
    return end_date_;
}
}