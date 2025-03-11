# E-Commerce Store (Console-Based) - C++

This is a simple console-based e-commerce store built in C++ that allows users to browse products, add items to a shopping cart, and complete a purchase through a basic payment processing system.

## Features
- **Product Listings**: View a list of available products with their prices.
- **Shopping Cart**: Add products with a specified quantity to the cart.
- **View Cart**: Display the items in the cart along with total cost.
- **Checkout & Payment**: Enter a payment amount to complete the transaction.
- **User-Friendly Interface**: Menu-driven navigation for easy interaction.

## How It Works
1. The program starts by displaying a menu with options.
2. Users can choose to view products, add items to the cart, or proceed to checkout.
3. The shopping cart stores selected products and calculates the total price.
4. The checkout system allows users to enter a payment amount.
5. If the payment is sufficient, the transaction is successful; otherwise, it fails.

## Installation & Compilation
To run this program on your system, follow these steps:

### Requirements
- C++ compiler (G++ recommended)
- Any terminal or command prompt

### Steps
1. Clone this repository:
   ```sh
   git clone https://github.com/AqibTayyab/E-commerce-Store-Console-based-.git
   ```
2. Navigate to the project directory:
   ```sh
   cd E-commerce-Store-Console-based-
   ```
3. Compile the code using G++:
   ```sh
   g++ main.cpp -o main
   ```
4. Run the compiled executable:
   ```sh
   ./main   # On Linux/Mac
   main.exe  # On Windows
   ```

## Usage
After running the program, you will see the following options:
```
1. View Products
2. Add to Cart
3. View Cart
4. Checkout
5. Exit
```
Follow the prompts to interact with the store. You can add items, review your cart, and process payments.

## Example Output
```
E-Commerce Store
1. View Products
2. Add to Cart
3. View Cart
4. Checkout
5. Exit
Enter your choice: 1

Available Products:
ID   Product       Price
---------------------------------
1    Laptop       $800.99
2    Smartphone   $499.50
3    Headphones   $99.99
4    Keyboard     $49.99
5    Mouse        $29.99
```

## Contribution
Feel free to contribute by submitting pull requests or reporting issues.

## License
This project is open-source and available under the MIT License.

---
**Author**: Aqib Tayyab
**GitHub**: https://github.com/AqibTayyab

