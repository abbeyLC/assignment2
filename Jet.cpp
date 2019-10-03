
#include "Jet.h"

Jet::Jet() {
    setBrand("Custom");
    setModel("XXX");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int numEngines) {
	numberOfEngines = numEngines;
}

double Jet::mileageEstimate(double t) {

	// get random number between 40 and 100 for the mileage
	double mileage = floor((rand() % 100 + 40)) * t;

	// if the number of engines is > 2 and the fuel type is "Rocket," boost mileage by 5.5% per engine
	if (numberOfEngines > 2 && fuelType == "Rocket")
		mileage += mileage * (numberOfEngines * 0.055);

    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           to_string(getNumberOfEngines());
}

