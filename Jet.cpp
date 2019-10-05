
#include "Jet.h"

/* constructors */
Jet::Jet() {
    setBrand("Custom");
    setModel("unknown");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}
/***************/

// destructor
Jet::~Jet() = default;

// accessor function returns number of engines
int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

// change the number of engines
void Jet::setNumberOfEngines(int numEngines) {
	numberOfEngines = numEngines;
}

double Jet::mileageEstimate(double t) {

	// get random number between 40 and 100 for the mileage
	// ( high - low + 1 ) + low
	double mileage = floor(rand() % (100 - 40 + 1) + 40) * t;

	// if the number of engines is > 2 and the fuel type is "Rocket," boost mileage by 5.5% per engine
	if (numberOfEngines > 2 && fuelType == "Rocket")
		mileage += mileage * (numberOfEngines * 0.055);

    return mileage;
}

// output the details of PoweredVehicle object
string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           to_string(getNumberOfEngines());
}






