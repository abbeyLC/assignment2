
#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"
#include <stdlib.h>    // srand, rand
#include <cmath>

class Skateboard : public Vehicle {
	
	// skateboard platform length in inches
	int platFormLength;

public:
    explicit Skateboard(string brand, string model, int platFormLength = 24);
    virtual ~Skateboard();
    virtual double mileageEstimate(double t);
    virtual string toString();
	int getPlatFormLength();
	void setPlatFormLength(int p);
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
