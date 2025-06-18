#include <string>

class Product {
    private:
        int id;
        std::string name;
        double price;
        int stockQty;
        int reorderThreshold;

    public:

        // Constructer

        Product(int id, const std::string& name, double price, int stockQty, int reorderThreshold): id(id), name(name), price(price), stockQty(stockQty), reorderThreshold(reorderThreshold) {}

        // Get Functions
        int get_id(void) const {
            return id;
        }

        std::string get_name(void) const {
            return name;
        }

        double get_price(void) const {
            return price;
        }

        int get_stockQty(void) const {
            return stockQty;
        }

        int get_reorderThreshold(void) const {
            return reorderThreshold;
        }

        // Set Functions 

        void set_id(int new_id) {
            id = new_id;
        }

        void set_name(const std::string& new_name) {
        name = new_name;
        }

        void set_price(double new_price) {
            price = new_price;
        }

        void set_stockQty(int new_stockQty) {
            stockQty = new_stockQty;
        }

        void set_reorderThreshold(int new_reorderThreshold) {
            reorderThreshold = new_reorderThreshold;
        }

};