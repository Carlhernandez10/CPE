#include "Order.h"

Order::Order(const std::string& id, const std::string& customerName, const std::string& contactInfo)
    : orderID(id), customerName(customerName), contactInfo(contactInfo), totalAmount(0.0), orderStatus("pending") {}

void Order::addProduct(const Product& product) {
    orderedProducts.push_back(product);
    totalAmount += product.getPrice();
}

void Order::removeProduct(const std::string& productID) {
    for (auto it = orderedProducts.begin(); it != orderedProducts.end(); ++it) {
        if (it->getDetails().find(productID) != std::string::npos) {
            totalAmount -= it->getPrice();
            orderedProducts.erase(it);
            break;
        }
    }
}

double Order::calculateTotal() const {
    return totalAmount;
}

void Order::updateStatus(const std::string& status) {
    orderStatus = status;
}
