

#include "Skateboard.h"

// constructor
Skateboard::Skateboard(string brand, string model, int platFormLength) {
    setBrand(brand);
    setModel(model);
	setPlatFormLength(platFormLength);
}

// destructor
Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double t) {

	// generate random number between 1 and 5
	double mileage = rand() % 5 + 1;
	
	// get random number between 0.1 and 0.5
	mileage /= 10.0;
	
	// find the mileage in given amount of time
	mileage *= t;
	
	// get a third of the time entered
	int third = t / 3.0;

	// if time > 25 minutes and < 250 minutes, add random about of mileage between 1 and a third of the time
	if (t > 25 && t < 250)
	{
		mileage += rand() % third + 1;
	}

    return mileage;
}


int Skateboard::getPlatFormLength()
{
	return platFormLength;
}

void Skateboard::setPlatFormLength(int p)
{
	platFormLength = p;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString() + "\n\tPlat form length: " + to_string(platFormLength) + " inches";
}











