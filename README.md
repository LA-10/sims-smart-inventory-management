# 🧠 Smart Inventory Management System (SIMS)

The **Smart Inventory Management System (SIMS)** is an intelligent software solution built in **C++** to streamline and automate inventory operations for businesses. It focuses on **real-time tracking**, **order and delivery management**, **sales analytics**, and **AI-powered inventory forecasting** to help companies reduce costs, improve stock handling, and enhance supply chain efficiency.

---

## 🚀 Key Features

- 📦 **Inventory Tracking:** Monitor quantity, location, and condition of stock items.
- 🔄 **Stock Movement Analysis:** Track sales, purchases, and returns.
- ⚠️ **Low-Stock Alerts:** Receive notifications for restocking needs.
- 🤖 **AI Inventory Recommendations:** Forecast demand and suggest optimal inventory levels.
- 📊 **Customer & Supplier Analytics:** Analyze purchase trends and supplier reliability.
- 🔐 **Role-Based Access Control:** Secure different access levels for admins, employees, and suppliers.

---

## 🛠️ Tech Stack

- **Language:** C++
- **Database:** SQLite (or MySQL/PostgreSQL as optional upgrades)
- **Libraries:** STL, nlohmann/json (optional for JSON), TensorFlow Lite or custom ML for AI
- **UI (Optional):** CLI-based or Qt for GUI

---

## 🧩 Modules

- `UserModule`: Login, roles, and permissions
- `InventoryModule`: CRUD operations for stock
- `OrderModule`: Purchase and sales orders
- `AnalyticsModule`: Sales trends and movement
- `AlertModule`: Low-stock and reorder notifications
- `AIEngine`: Predictive inventory forecasting

---

## 🔧 How to Run

```bash
    g++ -std=c++17 main.cpp -o sims
    ./sims
```



## 📄 License

This project uses the [CMake Project Template by Matt Morse](https://github.com/mmorse1217/cmake-project-template), which is licensed under the [MIT License](./LICENSE).
The original license file has been retained for attribution.

All additional source code, modifications, and features created for the **Smart Inventory Management System (SIMS)** are also licensed under the MIT License.

---

