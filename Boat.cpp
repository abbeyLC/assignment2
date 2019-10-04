
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
double Boat::mileageEstimate(double t)
{
	// mileage is 0.05 miles per minute
	double mileage = t * 0.05;

	// simulate waves height between 1 and 100
	double waveHeight = rand() % 100 + 1;

	/*if statements simulate the following:
		- light boats travel faster in small waves
		- light boats travel slower in large waves

		- heavy boats travel fast in choppy waves
		- heavy boats travel 
	*/

	// if small waves and light boat -- faster
	if (waveHeight <= 50 && weight <= 10000)
	{
		// add random percentage of mileage between 50 and 100 to simulate that the boat can go
		//		faster in these conditions
		mileage += (rand() % 100 + 50)*mileage;
	}

	// if big waves and light boat -- slower
	else if (waveHeight > 50 && weight <= 10000)
	{
		// add random percentage of mileage between 50 and 100 to simulate that the boat will go
		//		slower in these conditions
		mileage += (rand() % 50 + 1)*mileage;
	}

	// heavy boats will always go slower
	else
	{
		// add random percentage of mileage between 1 and 50 to simulate that heavy boats travel slow
		mileage += (rand() %  50 + 1)*mileage;
	}

	return mileage;

}

// used to output details of the Boat boat
string Boat::toString()
{
    return "-> Boat\n" + PoweredVehicle::toString() + "\n\tNumber of decks: " +
           to_string(getNumDecks());
}




