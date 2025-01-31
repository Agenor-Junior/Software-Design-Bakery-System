#ifndef INVOICE_H
#define INVOICE_H

#include <string>
#include "Order.h"
namespace ads{
    class Invoice {
private:
    Order order; // Reference to the associated order object 
    double totalAmount; // Total amount of the invoice (derived from the associated order)

public:
    Invoice(const Order& order); // Constructor taking a reference to the associated order object
    double calculateTotalAmount() const; // Calculate the total amount of the invoice 
	void printInvoice() const; // Print the invoice details 
    Order getOrder() const; // Get the associated order object 
};
}

#endif // INVOICE_H

