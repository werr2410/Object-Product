#include "System.h"

System::System() {}

System::~System() {
    for(int i = 0; i < v_product.size(); i++)
        delete v_product[i];
}

void System::pushProduct(Product* product) {
    v_product.push_back(product);
}

void System::deleteProduct(Product* product) {
    vector<Product*>::iterator it = find(v_product.begin(), v_product.end(), product);

    if(it != v_product.end()) {
        v_product.erase(it);
    }
}

void System::repushProduct(Product* oldProduct, Product* newProduct) {
    int index = -1;

    for(int i = 0; i < v_product.size(); i++){
        if(v_product[i] == oldProduct)
            index = i;
    }

    if(index != -1)
        v_product[index] = newProduct;
    
}

void System::showAllProduct() {
    for(int i = 0; i < v_product.size(); i++){
        v_product[i]->show();
        cout << "\n";
    }
}

void System::showProduct(Product* showProduct) {
    int index = -1;

    for(int i = 0; i < v_product.size(); i++){
        if(v_product[i] == showProduct)
            index = i;
    }

    if(index != -1)
        v_product[index]->show();
       
}

