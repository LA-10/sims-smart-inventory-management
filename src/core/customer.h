#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>

class Customer {
    private:
        int customer_id;
        std::string name;
        std::string email;
        std::string phone;
        std::string address;
    public:
        // Constructer
        Customer(int customer_id, const std::string& name, const std::string& email, 
                const std::string& phone, const std::string& address);

        // Get Functions
        int get_customer_id(void) const;
        std::string& get_name(void) const;
        std::string& get_email(void) const;
        std::string& get_address(void) const;

        // Set Functions
        void set_customer_id(int new_customer_id);
        void set_name(const std::string& new_name);
        void set_email(const std::string& new_email);
        void set_phone(const std::string& new_phone);
        void set_address(const std::string& new_address);
};  

#endif // CUSTOMER_H