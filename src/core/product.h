#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    int id;
    std::string name;
    std::string category;
    double price;
    int quantity;
    std::string location;
    int supplier_id;
    std::string expiry_date;
    int reorder_level;

public:
    // Constructor
    Product(int id,
            const std::string& name,
            std::string &category,
            double price,
            int quantity,
            const std::string& location,
            int supplier_id,
            const std::string& expiry_date,
            int reorder_level);

    // Getters
    int getId() const;
    std::string getName() const;
    std::string& getCategory() const;
    double getPrice() const;
    int getQuantity() const;
    std::string getLocation() const;
    int getSupplierId() const;
    std::string getExpiryDate() const;
    int getReorderLevel() const;

    // Setters
    void setId(int id);
    void setName(const std::string& name);
    void setCategory(std::string &category);
    void setPrice(double price);
    void setQuantity(int quantity);
    void setLocation(const std::string& location);
    void setSupplierId(int supplier_id);
    void setExpiryDate(const std::string& expiry_date);
    void setReorderLevel(int reorder_level);
};

#endif // PRODUCT_H
