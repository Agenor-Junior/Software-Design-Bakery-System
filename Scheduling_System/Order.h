#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "Customer.h"
#include "BakedGood.h"
namespace ads {
class Order
{
private:
	std::string orderID; // unique identifier for the order (e.g., "ORD123") 
    Customer customer; // customer associated with the order 
	std::string dueDate; // due date of the order (e.g., "2021-12-31")
    std::string pickupTime; // pickup time of the order (e.g., "10:00 AM")
    std::vector<BakedGood> bakedGoods; // list of baked goods in the order 

public:
	Order(const std::string& orderID, const Customer& customer, const std::string& dueDate, const std::string& pickupTime); // constructor with orderID, customer, dueDate, and pickupTime parameters
	std::string getOrderID() const; // returns the orderID of the order 
	Customer getCustomer() const; // returns the customer associated with the order 
    std::string getDueDate() const; // returns the due date of the order 
    std::string getPickupTime() const; // returns the pickup time of the order 
	std::vector<BakedGood> getBakedGoods() const; // returns the list of baked goods in the order 

    void addBakedGood(const BakedGood& bakedGood); // adds a baked good to the order 
    void removeBakedGood(const std::string& bakedGoodName); // removes a baked good from the order
	void setDueDate(const std::string& dueDate); // sets the due date of the order
    void setPickupTime(const std::string& pickupTime);// sets the pickup time of the order 
};
}
#endif // ORDER_H

