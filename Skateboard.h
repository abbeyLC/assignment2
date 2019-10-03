
#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <cmath>

class Skateboard : public Vehicle {

public:
    explicit Skateboard(string brand, string model);
    virtual ~Skateboard();
    virtual double mileageEstimate(double t);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
