
#include <string>
#include "supplier.h"

// Constructer
Supplier::Supplier(int supplier_id, const std::string& name, const std::string& email, 
        const std::string& phone, const std::string& address):
        supplier_id(supplier_id), name(name), email(email), phone(phone), address(address) {}

// Get Functions
int Supplier::get_supplier_id(void) const {
    return supplier_id;
}

std::string& Supplier::get_name(void) const {
    return name;
}

std::string& Supplier::get_email(void) const {
    return email;
}

std::string& Supplier::get_address(void) const {
    return address;
}


// Set Functions
void Supplier::set_supplier_id(int supplier_id) {
    this -> supplier_id = supplier_id;
}

void Supplier::set_name(const std::string& name) {
    this -> name = name;
}

void Supplier::set_email(const std::string& email) {
    this ->email = email;
}

void Supplier::set_phone(const std::string& phone) {
    this -> phone = phone;
}

void Supplier::set_address(const std::string& address) {
    this -> address = address;
}


