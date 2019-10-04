#ifndef DRIVINGSIMULATOR_BOAT_H
#define DRIVINGSIMULATOR_BOAT_H

#include <stdlib.h>     /* srand, rand */
#include "PoweredVehicle.h"

// the boat class inherits from PoweredVehicle to accomodate power operated boats
// assume that a boat that does not require power (ex. rowboat, canoe, etc.) can
// be represented by passing "unknown" to the fuelType member data


class Boat : public PoweredVehicle {

private:
	// to store the number of decks on a Boat boat
    int numberOfDecks;
	
	// weight of the boat in lbs
	int weight;

public:
	// default constructor
    Boat();

	// constructor
    explicit Boat(string brand, string model, string fuelType,
                 int numberOfDecks, int weight);

	// destructor
    virtual ~Boat();
	
	// return the number of decks
    int getNumDecks();
	
	// set the number of decks
    void setNumDecks(int nDecks);
	
	// return the number of decks
    int getWeight();
	
	// set the number of decks
    void setWeight(int w);
	
	// estimate and return mileage
    virtual double mileageEstimate(double time);
	
	// used to output details of the Boat boat
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_Boat_H
