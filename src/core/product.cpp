#include "Product.h"
#include <string>

// Constructor
Product::Product(int id, const std::string& name, std::string &category, double price,
                 int quantity, const std::string& location, int supplier_id,
                 const std::string& expiry_date, int reorder_level):
      id(id), name(name), category(category), price(price), quantity(quantity),
      location(location), supplier_id(supplier_id), expiry_date(expiry_date),
      reorder_level(reorder_level) {}

// Getters
int Product::getId() const {
     return id; 
}

std::string Product::getName() const { 
    return name; 
}

std::string& Product::getCategory() const { 
    return category; 
}

double Product::getPrice() const { 
    return price; 
}

int Product::getQuantity() const { 
    return quantity; 
}

std::string Product::getLocation() const {
     return location; 
}

int Product::getSupplierId() const { 
    return supplier_id; 
}

std::string Product::getExpiryDate() const { 
    return expiry_date; 
}

int Product::getReorderLevel() const { 
    return reorder_level; 
}

// Setters
void Product::setId(int id) { 
    this->id = id; 
}

void Product::setName(const std::string& name) { 
    this->name = name; 
}

void Product::setCategory(std::string& category) { 
    this->category = category; 
}

void Product::setPrice(double price) { 
    this->price = price; 
}

void Product::setQuantity(int quantity) { 
    this->quantity = quantity; 
}

void Product::setLocation(const std::string& location) { 
    this->location = location; 
}

void Product::setSupplierId(int supplier_id) { 
    this->supplier_id = supplier_id; 
}

void Product::setExpiryDate(const std::string& expiry_date) { 
    this->expiry_date = expiry_date; 
}

void Product::setReorderLevel(int reorder_level) { 
    this->reorder_level = reorder_level; 
}
