
#include <string>
#include <unordered_map>
#include "order.h"

// Constructer
Order::Order(int order_id, int customer_id, const std::string &delivery_date,
        const std::unordered_map<std::string, int> &items, double total_amount, const std::string &status):
        order_id(order_id), customer_id(customer_id), delivery_date(delivery_date), items(items), total_amount(total_amount), status(status) {}
        
// Get Functions
int Order::get_order_id(void) const {
    return order_id;
}

int Order::get_customer_id(void) const {
    return customer_id;
}

std::string& Order::get_delivery_date(void) const {
    return delivery_date;
}

std::unordered_map<std::string, int>& Order::get_items(void) const {
    return items;
}

double Order::get_total_amount(void) const {
    return total_amount;
}

std::string& Order::get_status(void) const {
    return status;
}

// Set Functions
void Order::set_order_id(int order_id) {
    this -> order_id = order_id;
}

void Order::set_customer_id(int customer_id) {
    this -> customer_id = customer_id;
}

void Order::set_delivery_date(const std::string& delivery_date) {
    this -> delivery_date = delivery_date;
}

void Order::set_items(const std::unordered_map<std::string, int> &items) {
   this -> items = items;
}

void Order::set_total_amount(double total_amount) {
    this -> total_amount = total_amount;
}

void Order::set_status(const std::string& status) {
    this -> status = status;
}
