#include "Book.h"

Book::Book() : Product() {}

Book::Book(string title, float price, string manufacture, int age) 
    : Product(title, price, manufacture, age) {}

void Book::show() const {
    std::cout << "DATA OF BOOK: \n";
    std::cout << "TITLE: " << Title << "\n";
    std::cout << "PRICE: " << price << '\n';
    std::cout << "MANUFACTURE:" << manufacture << "\n";
    std::cout << "AGE FOR: " << age << "\n";
}

string Book::type() const {
    return "Book";
}

void Book::save(ofstream& file) const {
    file << "Book ";
    file << Title << " ";
    file << price << " ";
    file << manufacture << " ";
    file << age << " ";
}