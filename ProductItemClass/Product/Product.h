#pragma once
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Product {
protected:
    string Title;
    float price;
    string manufacture;
    int age;

public:
    Product();
    Product(string title, float price, string manufacture, int age);

    void setTitle(string title);
    void setPrice(float price);
    void setManufacture(string manufacture);
    void setAge(int age);

    string getTitle() const;
    float getPrice() const;
    string getManufacture() const;
    int getAge() const;

    virtual void show() const = 0;
    virtual string type() const = 0;
    virtual void save(ofstream& file) const = 0;
};
