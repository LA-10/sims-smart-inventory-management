
#include <string>
#include <vector>
#include "customer.h"

// Constructer
Customer::Customer(int customer_id, const std::string& name, const std::string& email, 
        const std::string& phone, const std::string& address):
        customer_id(customer_id), name(name), email(email), phone(phone), address(address) {}

// Get Functions
int Customer::get_customer_id(void) const {
    return customer_id;
}

std::string& Customer::get_name(void) const {
    return name;
}

std::string& Customer::get_email(void) const {
    return email;
}

std::string& Customer::get_address(void) const {
    return address;
}


// Set Functions
void Customer::set_customer_id(int customer_id) {
    this -> customer_id = customer_id;
}

void Customer::set_name(const std::string& name) {
    this -> name = name;
}

void Customer::set_email(const std::string& email) {
    this ->email = email;
}

void Customer::set_phone(const std::string& phone) {
    this -> phone = phone;
}

void Customer::set_address(const std::string& address) {
    this -> address = address;
}


