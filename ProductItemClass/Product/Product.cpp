#include "Product.h"

int Product::getAge() const {
    return age;
}

string Product::getManufacture() const {
    return manufacture;
}

float Product::getPrice() const {
    return price;
}

string Product::getTitle() const {
    return Title;
}

Product::Product() {
    setManufacture("NO DATA");
    setPrice(0);
    setTitle("NO DATA");
    setAge(0);
}

Product::Product(string title, float price, string manufacture, int age) {
    setManufacture(title);
    setPrice(price);
    setTitle(manufacture);
    setAge(age);    
}

void Product::setAge(int age) {
    if(age >= 0)
        this->age = age;
    else
        this->age = 0;
}

void Product::setManufacture(string manufacture) {
    this->manufacture = manufacture;
}

void Product::setPrice(float price) {
    if(price >= 0)
        this->price = price;
    else
        this->price = 0;    
}

void Product::setTitle(string title) {
    this->Title = title;
}