#pragma once
#include "../Product/Product.cpp"

class Book : public Product {
public:  
    Book();
    Book(string title, float price, string manufacture, int age);

    virtual void show() const override;
    virtual string type() const override;
    virtual void save(ofstream& file) const override;
};

