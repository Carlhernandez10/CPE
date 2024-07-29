#include "Bakery.h"
#include <iostream>

Bakery::Bakery(const std::string& name, const std::string& address) 
    : name(name), address(address) {}

void Bakery::addProduct(const Product& product) {
    products.push_back(product);
}

void Bakery::removeProduct(const std::string& productID) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->getDetails().find(productID) != std::string::npos) {
            products.erase(it);
            break;
        }
    }
}

void Bakery::hireEmployee(const Staff& staffMember) {
    staff.push_back(staffMember);
}

void Bakery::fireEmployee(const std::string& staffID) {
    for (auto it = staff.begin(); it != staff.end(); ++it) {
        if (it->getDetails().find(staffID) != std::string::npos) {
            staff.erase(it);
            break;
        }
    }
}

void Bakery::placeOrder(const Order& order) {
    orders.push_back(order);
}

void Bakery::cancelOrder(const std::string& orderID) {
    for (auto it = orders.begin(); it != orders.end(); ++it) {
        if (it->getDetails().find(orderID) != std::string::npos) {
            orders.erase(it);
            break;
        }
    }
}

void Bakery::checkInventory() const {
    for (const auto& product : products) {
        std::cout << product.getDetails() << std::endl;
    }
}
