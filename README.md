
# Scheduling Module

This project aims to automate the scheduling process for a bakery, which currently handles this task manually. The system will enable the registration of customer information, bakers, ordered bakery items, and prices, as well as the creation of invoices based on the orders.

## Objective
Create use case and sequence diagrams, along with header files containing the necessary classes and function declarations to implement the described system. Additionally, the system includes a mockup of the system's interface.

## Technologies
- **Headers:** C++
- **Diagrams:** Visual Paradigm
- **Mockup Screen:** Wireframe

## System Features

### Order Registration:
- Register customer orders with multiple bakery items.
- Assign bakers responsible for the orders.
- Generate invoices from the order information.

### Order Query:
- Query scheduled orders by day.
- View detailed information, including pickup date, ordered items, and price.

### Automation:
- Automate price calculation based on time and item values.
- Allow modifications to orders before confirmation.

### Create Invoices:
- Convert an order into a sale by generating a corresponding invoice.

## Acceptance Criteria
- Record orders containing multiple bakery items for a customer.
- Transform orders into sales.
- Query the calendar by day to view scheduled orders.

## Main Use Case
### Name: Create Customer Order
- **Triggering Event:** A customer places an order.
- **Primary Actor:** Owner.
- **Description:** Allows the owner to register a new order and generate an invoice.
- **Initial Conditions:** The owner has accessed the main menu.
- **Final Conditions:** The order is created and can now be queried.

### Activity Flow
1. The owner requests to add an order.
2. The system displays a list of customers for selection.
3. The owner selects a customer and provides the order date.
4. The system displays already scheduled orders for the selected day.
5. The owner enters the pickup time and selects bakery items, including special instructions and quantity.
6. The system calculates the prices and displays order details for confirmation.
7. The owner confirms and saves the order.

### Exceptions
- The owner can abort the process at any time.

## Diagrams
1. **Class Diagram:** Represent the necessary classes and interactions for the system.
2. **Sequence Diagram:** Detail the process of creating an order.
3. **Low-Fidelity Mockup:** Include a mockup of the use case screen.

---

