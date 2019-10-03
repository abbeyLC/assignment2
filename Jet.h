

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <cmath>

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int numEngines = 1);

    virtual ~Jet();
    int getNumberOfEngines();
    void setNumberOfEngines(int numEngines);
    virtual double mileageEstimate(double t);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_Jet_H
