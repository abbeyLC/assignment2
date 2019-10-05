#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"
#include <stdlib.h>     /* srand, rand */
#include <cmath>

// Jet class inherits from the PoweredVehicle class
class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:

/* constructors	*/
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int numEngines = 1);

	// destructor
    virtual ~Jet();

	// accessor and set functions 
    int getNumberOfEngines();
    void setNumberOfEngines(int numEngines);

	// overridable functions
    virtual double mileageEstimate(double t);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_Jet_H
