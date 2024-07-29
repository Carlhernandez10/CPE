#include <iostream>
#include "Bakery.h"
#include "Product.h"
#include "Staff.h"
#include "Order.h"

int main() {
    Bakery myBakery("Sweet Treats", "123 Baker Street");

    Product bread("001", "Bread", "Bakery", 2.50, 100);
    myBakery.addProduct(bread);

    Staff john("S001", "John Doe", "Baker", "123-456-7890");
    myBakery.hireEmployee(john);

    Order order1("O001", "Jane Smith", "987-654-3210");
    order1.addProduct(bread);
    myBakery.placeOrder(order1);

    std::cout << "Total amount for the order: $" << order1.calculateTotal() << std::endl;

    return 0;
}
