#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Structure to represent a product
struct Product {
    int id;
    string name;
    double price;
};

// Structure to represent an item in the shopping cart
struct CartItem {
    Product product;
    int quantity;
};

class Store {
private:
    vector<Product> products; // List of available products
    vector<CartItem> cart;    // User's shopping cart

public:
    // Constructor to initialize some products
    Store() {
        products.push_back({1, "Laptop", 800.99});
        products.push_back({2, "Smartphone", 499.50});
        products.push_back({3, "Headphones", 99.99});
        products.push_back({4, "Keyboard", 49.99});
        products.push_back({5, "Mouse", 29.99});
    }

    // Display available products
    void displayProducts() {
        cout << "\nAvailable Products:" << endl;
        cout << "ID\tProduct\t\tPrice" << endl;
        cout << "---------------------------------" << endl;
        for (const auto& product : products) {
            cout << product.id << "\t" << product.name << "\t$" << fixed << setprecision(2) << product.price << endl;
        }
    }

    // Add product to cart
    void addToCart(int productId, int quantity) {
        for (const auto& product : products) {
            if (product.id == productId) {
                cart.push_back({product, quantity});
                cout << quantity << " x " << product.name << " added to cart." << endl;
                return;
            }
        }
        cout << "Invalid product ID." << endl;
    }

    // Display cart items
    void displayCart() {
        if (cart.empty()) {
            cout << "\nYour cart is empty." << endl;
            return;
        }

        cout << "\nYour Shopping Cart:" << endl;
        cout << "Product\t\tQuantity\tPrice" << endl;
        cout << "--------------------------------------" << endl;
        double total = 0;
        for (const auto& item : cart) {
            double itemTotal = item.quantity * item.product.price;
            cout << item.product.name << "\t" << item.quantity << "\t\t$" << fixed << setprecision(2) << itemTotal << endl;
            total += itemTotal;
        }
        cout << "--------------------------------------" << endl;
        cout << "Total: \t\t\t$" << fixed << setprecision(2) << total << endl;
    }

    // Process payment
    void checkout() {
        if (cart.empty()) {
            cout << "\nYour cart is empty. Nothing to checkout." << endl;
            return;
        }

        displayCart();
        double payment;
        cout << "\nEnter payment amount: $";
        cin >> payment;

        double total = 0;
        for (const auto& item : cart) {
            total += item.quantity * item.product.price;
        }

        if (payment >= total) {
            cout << "Payment successful! Thank you for your purchase." << endl;
            cart.clear(); // Empty the cart after purchase
        } else {
            cout << "Insufficient payment. Transaction failed." << endl;
        }
    }
};

int main() {
    Store store;
    int choice;

    do {
        cout << "\nE-Commerce Store" << endl;
        cout << "1. View Products" << endl;
        cout << "2. Add to Cart" << endl;
        cout << "3. View Cart" << endl;
        cout << "4. Checkout" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                store.displayProducts();
                break;
            case 2: {
                int productId, quantity;
                cout << "Enter product ID: ";
                cin >> productId;
                cout << "Enter quantity: ";
                cin >> quantity;
                store.addToCart(productId, quantity);
                break;
            }
            case 3:
                store.displayCart();
                break;
            case 4:
                store.checkout();
                break;
            case 5:
                cout << "Exiting the store. Have a great day!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
