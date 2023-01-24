#pragma once
#include "../Product/Product.cpp"

class SportsEquipment : public Product {
private:
    string kindOfSport;

public:
    SportsEquipment();
    SportsEquipment(string title, float price, string manufacture, int age, string kindOfSport);

    void setKindOfSport(string kindOfSport);
    string getKindOfSport() const;

    virtual void show() const override;
    virtual string type() const override;
    virtual void save(ofstream& file) const override;
};

