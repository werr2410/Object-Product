#pragma once
#include "../Product/Product.cpp"

class Toy : public Product {
private:
    string material;

public:
    Toy();
    Toy(string title, float price, string manufacture, int age, string material);

    void setMaterial(string material);
    string getMaterial() const;

    virtual void show() const override;
    virtual string type() const override;
    virtual void save(ofstream& file) const override;
};
