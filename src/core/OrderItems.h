#ifndef ORDER_ITEMS_H
#define ORDER_ITEMS_H

class OrderItem {
    private:
        int order_id;
        int product_id;
        int quntity;
        double price;
    public:
        // Constructer
        OrderItem(int order_id, int product_id, int quntity, double price);

        // Get functions
        int get_order_id(void) const;
        int get_product_id(void) const;
        int get_quantity(void) const;
        double get_price(void) const;

        // Set Functions
        void set_order_id(int order_id);
        void set_product_id


};


#endif ORDER_ITEMS_H