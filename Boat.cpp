
#include "Boat.h"

// the boat class inherits from PoweredVehicle to accomodate power operated boats
// assume that a boat that does not require power (ex. rowboat, canoe, etc.) can
// be represented by passing "unknown" to the fuelType member data


// default constructor
Boat::Boat()
{
    numberOfDecks = 1;
    setBrand("Custom");
    setModel("unknown");
	setFuelType("unknown");
	setWeight(10000);
}

// constructor
Boat::Boat(string brand, string model, string fuelType,
			 int numberOfDecks, int weight)
{
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumDecks(numberOfDecks);
	setWeight(weight);
}

// destructor
Boat::~Boat() = default;

// return the number of decks
int Boat::getNumDecks()
{
	return numberOfDecks;
}

// set the number of decks
void Boat::setNumDecks(int nDecks)
{
	numberOfDecks = nDecks;
}

// return the number of decks
int Boat::getWeight()
{
	return weight;
}

// set the number of decks
void Boat::setWeight(int w)
{
	weight = w;
}

// estimate and return mileage
double Boat::mileageEstimate(double time)
{
	return 0;
}

// used to output details of the Boat boat
string Boat::toString()
{
    return "-> Boat\n" + PoweredVehicle::toString() + "\n\tNumber of decks: " +
           to_string(getNumDecks());
}




