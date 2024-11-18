#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include <string>
#include "Order.h"
namespace ads
{
class Scheduler
{
private:
    std::vector<Order> orders; // Vector to store orders 

public:
	void addOrder(const Order& order); // Method to add an order to the scheduler 
    std::vector<Order> queryOrdersByDate(const std::string& date) const; // Method to query orders by date 
    void convertOrderToInvoice(const std::string& orderID); // Method to convert an order to an invoice 
};
}
#endif // SCHEDULER_H

