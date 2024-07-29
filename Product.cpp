#include "Product.h"
#include <sstream>

Product::Product(const std::string& id, const std::string& name, const std::string& category, double price, int stockQuantity)
    : productID(id), name(name), category(category), price(price), stockQuantity(stockQuantity) {}

void Product::updateStock(int quantity) {
    stockQuantity += quantity;
}

std::string Product::getDetails() const {
    std::ostringstream oss;
    oss << "ID: " << productID << ", Name: " << name << ", Category: " << category
        << ", Price: $" << price << ", Stock: " << stockQuantity;
    return oss.str();
}

void Product::applyDiscount(double discountPercentage) {
    price -= price * (discountPercentage / 100.0);
}

double Product::getPrice() const {
    return price;
}
