#ifndef BAKERY_H
#define BAKERY_H
#include <string>
#include <vector>
#include "Product.h"
#include "Staff.h"
#include "Order.h"
using namespace ;

class Bakery {
public:
    Bakery(const string& name, const string& address);
    void addProduct(const Product& product);
    void removeProduct(const string& productID);
    void hireEmployee(const Staff& staff);
    void fireEmployee(const string& staffID);
    void placeOrder(const Order& order);
    void cancelOrder(const string& orderID);
    void checkInventory() const;

private:
    string name;
    vector<Product> products;
    vector<Staff> staff;
    vector<Order> orders;
};

#endif // BAKERY_H
