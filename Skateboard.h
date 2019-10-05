
#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"
#include <stdlib.h>    // srand, rand

// inherits the Vehicle class
class Skateboard : public Vehicle {
	
	// skateboard platform length in inches
	int platFormLength;

public:

	// constructor
    explicit Skateboard(string brand, string model, int platFormLength = 24);

	// destructor
    virtual ~Skateboard();

	// overridable functions
    virtual double mileageEstimate(double t);
    virtual string toString();

	// accessor/set functions
	int getPlatFormLength();
	void setPlatFormLength(int p);
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
