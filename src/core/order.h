#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <unordered_map>

class Order {
    private:
        int order_id;
        int customer_id;
        std::string delivery_date;
        std::unordered_map<std::string, int> items;
        double total_amount;
        std::string status;
    public:
        // Constructer
        Order(int order_id, int customer_id, const std::string &delivery_date,
                const std::unordered_map<std::string, int> &items, double total_amount, const std::string &status);
        
        // Get Functions
        int get_order_id(void) const;
        int get_customer_id(void) const;
        std::string& get_delivery_date(void) const;
        std::unordered_map<std::string, int>& get_items(void) const;
        double get_total_amount(void) const;
        std::string& get_status(void) const;

        // Set Functions
        void set_order_id(int order_id);
        void set_customer_id(int customer_id);
        void set_delivery_date(const std::string& new_delivery_date);
        void set_items(const std::unordered_map<std::string, int> &new_items);
        void set_total_amount(double new_total_amount);
        void set_status(const std::string& new_status);

};


#endif // ORDER_H