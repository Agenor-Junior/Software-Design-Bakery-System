#ifndef BAKEDGOOD_H
#define BAKEDGOOD_H

#include <string>
namespace ads {
class BakedGood
{
private:
    std::string name; // Name of the baked good item (e.g., "Cake", "Cookie", etc.)
    double pricePerUnit; // Price per unit of the baked good item (e.g., 2.50 for a cake) 
    std::string specialInstructions; // Special instructions for the baked good item (e.g., "No icing", "No sprinkles", etc.)

public:
    BakedGood(const std::string& name, double pricePerUnit, const std::string& specialInstructions = ""); // Constructor with default special instructions
    std::string getName() const; // Get the name of the baked good item 
    double getPricePerUnit() const; // Get the price per unit of the baked good item 
    std::string getSpecialInstructions() const; // Get the special instructions for the baked good item 
	void setName(const std::string& name); // Set the name of the baked good item 
	void setPricePerUnit(double price);// Set the price per unit of the baked good item 
	void setSpecialInstructions(const std::string& instructions); // Set the special instructions for the baked good item 
};
}
#endif // BAKEDGOOD_H

