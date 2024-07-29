#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product {
public:
    Product(const string& id, const string& name, const string& category, double price, int stockQuantity);
    void updateStock(int quantity);
    string getDetails() const;
    void applyDiscount(double discountPercentage);
    double getPrice() const;

private:
    string productID;
    string name;
    string category;
    double price;
    int stockQuantity;
};

#endif 
