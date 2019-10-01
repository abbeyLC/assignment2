
#include "Jet.h"

Jet::Jet() {
    setBrand("Custom");
    setModel("VTx");
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

double Jet::mileageEstimate(double time) {
	
	
	 /* initialize random seed: */
	//srand (time(0));

	/* generate secret number between 1 and 10: */
	double mileage = rand() % 100 + 40;
	
	if (numberOfEngines > 2 && fuelType == "Rocket")
		mileage += mileage * (numberOfEngines * 0.055);
	
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           to_string(getNumberOfEngines());
}

