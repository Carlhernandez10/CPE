#ifndef ORDER_H
#define ORDER_H
#include <string>
#include <vector>
#include "Product.h"
using namespace std;

class Order {
public:
    Order(const string& id, const string& customerName, const string& contactInfo);
    void addProduct(const Product& product);
    void removeProduct(const string& productID);
    double calculateTotal() const;
    void updateStatus(const string& status);

private:
    string orderID;
    string customerName;
    string contactInfo;
    vector<Product> orderedProducts;
    double totalAmount;
    string orderStatus;
};

#endif // ORDER_H
