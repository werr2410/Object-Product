#include "SportsEquipment.h"

SportsEquipment::SportsEquipment() : Product() {
    setKindOfSport("NO DATA");
}

SportsEquipment::SportsEquipment(string title, float price, string manufacture, int age, string kindOfSport) 
    : Product() {
    setKindOfSport(kindOfSport);
}

void SportsEquipment::setKindOfSport(string kindOfSport) {
    this->kindOfSport = kindOfSport;
}

string SportsEquipment::getKindOfSport() const {
    return kindOfSport;
}

void SportsEquipment::show() const {
    std::cout << "DATA OF SPORT EQUIPMENT: \n";
    std::cout << "TITLE: " << Title << "\n";
    std::cout << "PRICE: " << price << '\n';
    std::cout << "MANUFACTURE:" << manufacture << "\n";
    std::cout << "AGE FOR: " << age << "\n";
    std::cout << "KIND OF SPORT: " << kindOfSport << "\n";
}

string SportsEquipment::type() const {
    return "SportsEquipment";
}

void SportsEquipment::save(ofstream& file) const {
    file << "SportsEquipment ";
    file << Title << " ";
    file << price << " ";
    file << manufacture << " ";
    file << age << " ";
    file << kindOfSport << " ";
} 