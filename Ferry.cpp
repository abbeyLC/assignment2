
#include "Ferry.h"

Ferry::Ferry() {
    numberOfDecks = 1;
    setBrand("Custom");
    setModel("unkown");
	setFuelType("unknown");
}

Ferry::Ferry(string brand, string model, string fuelType, int numberOfDecks) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumDecks(numberOfDecks);
}

Ferry::~Ferry() = default;

int Ferry::getNumDecks() {
    return numberOfDecks;
}

void Ferry::setNumDecks(int nDecks) {
    numberOfDecks = nDecks;
}

double Ferry::mileageEstimate(double time) {
	
	// ferry boat mileage is given in knots
	// 1 knot is approximately 0.0191797 miles per minute
	
	/*
		mileage for a Ferry object depends on the weight and number of passengers
		
		if weight is 
	
	*/
	
	
	
    double mileage = 15 * time;
    if (fuelType == "electricity") {
        mileage += mileage * 0.05;
    }
    return mileage;
}

string Ferry::toString() {
    return "-> Ferry\n" + PoweredVehicle::toString() + "\n\tNumber of decks: " +
           to_string(getNumDecks());
}





