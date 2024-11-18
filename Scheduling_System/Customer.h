#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
namespace ads {
    class Customer
    {
    private:
		std::string name; // name of the customer (e.g., "John Doe")
		std::string contactInfo; // contact information of the customer (e.g., "123-456-7890")

    public:
        Customer(const std::string& name, const std::string& contactInfo); // constructor with name and contact info parameters 
		std::string getName() const; // returns the name of the customer 
        std::string getContactInfo() const; // returns the contact information of the customer
		void setName(const std::string& name); // sets the name of the customer 
        void setContactInfo(const std::string& contactInfo); // sets the contact information of the customer 
    };
}
#endif // CUSTOMER_H

