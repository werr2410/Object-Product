#pragma once
#include "../ProductClass/Book.cpp"
#include "../ProductClass/SportsEquipment.cpp"
#include "../Product/Product.cpp"
#include <vector>
#include <algorithm>

using std::vector;
using std::find;

class System {
private:
    vector<Product* > v_product;

public:
    System();
    ~System();

    void pushProduct(Product* product);
    void deleteProduct(Product* product);
    void repushProduct(Product* oldProduct, Product* newProduct);
    void showProduct(Product* showProduct);
    void showAllProduct();
};

