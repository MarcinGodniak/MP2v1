#pragma once

#include <chrono>
#include <optional>
#include "Client.h"
#include "Vehicle.h"

namespace Asocjacja_z_atrybutem {

class Order {
public:
    using time_type = std::chrono::time_point<std::chrono::steady_clock>;
    static std::shared_ptr<Order> MakeOrder(std::shared_ptr<Client> client, std::shared_ptr<Vehicle> vehicle, time_type start_date, std::optional<time_type> end_date = {});


    [[nodiscard]] const std::shared_ptr<Client> &getClient() const;
    [[nodiscard]] const std::shared_ptr<Vehicle> &getVehicle() const;
    [[nodiscard]] const time_type &getStartDate() const;
    [[nodiscard]] const std::optional<time_type> &getEndDate() const;

private:
    Order(std::shared_ptr<Client> client, std::shared_ptr<Vehicle> vehicle, time_type start_date, std::optional<time_type> end_date = {} );

    std::shared_ptr<Client> client_;
    std::shared_ptr<Vehicle> vehicle_;

    time_type start_date_;
    std::optional<time_type> end_date_;
};

}

