#include "Toy.h"

Toy::Toy() : Product() {
    setMaterial("NO DATA");
}

Toy::Toy(string title, float price, string manufacture, int age, string material) 
    : Product(title, price, manufacture, age) {
    setMaterial(material);
}

void Toy::setMaterial(string material) {
    this->material = material;
}

string Toy::getMaterial() const {
    return material;
}

void Toy::show() const {
    std::cout << "DATA OF TOY: \n";
    std::cout << "TITLE: " << Title << "\n";
    std::cout << "PRICE: " << price << '\n';
    std::cout << "MANUFACTURE:" << manufacture << "\n";
    std::cout << "AGE FOR: " << age << "\n";
    std::cout << "MATERIAL: " << material << "\n";
}

string Toy::type() const {
    return "Toy";
}

void Toy::save(ofstream& file) const {
    file << "TOY ";
    file << Title << " ";
    file << price << " ";
    file << manufacture << " ";
    file << age << " ";
    file << material << " ";
}
