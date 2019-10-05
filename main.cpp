/* sources
	http://www.cplusplus.com/reference/cstdlib/srand/ 
	http://www.cplusplus.com/forum/beginner/102036/
*/


#include <iostream>
#include <time.h>       
#include "Car.h"
#include "Bicycle.h"
#include "Jet.h"
#include "Skateboard.h"
#include "Boat.h"

// uses the toString function to print the details of each vehicle in the array of
//	Vehicle pointers passed in
void printVehiclesRoster(Vehicle **vehicles, int size);

int main() {
	
	/* initialize random seed: */
	srand (time(0));
	
    std::cout << "Driving simulator" << std::endl;

	// initialize array of Vehicle pointers
    int size = 12;
    int capacity = 12;
    Vehicle **vehiclesArray = new Vehicle *[capacity];

	// add a different vehicle to each array element
    vehiclesArray[0] = new Car();
    vehiclesArray[1] = new Bicycle("eTAP", "P5X");
    vehiclesArray[2] = new Bicycle("R&A", "Dogma F8", 5);
    vehiclesArray[3] = new Car("Tesla", "T2", "electricity", "large");
    vehiclesArray[4] = new Bicycle("Mizuno", "Wave", 10);
    vehiclesArray[5] = new Car("BMW", "X5", "diesel", "grande");
    vehiclesArray[6] = new Jet("Airbus", "YYY", "diesel", 2);
    vehiclesArray[7] = new Jet("Hawker", "ZZZ", "Rocket", 4);
	vehiclesArray[8] = new Skateboard("White Fang", "XXX", 32);
	vehiclesArray[9] = new Skateboard("Santa Cruz", "YYY");
	vehiclesArray[10] = new Boat("Bertram", "360 Moppie", "diessel", 1, 10000);
	vehiclesArray[11] = new Boat("Boston Whaler", "420 Outrage", "diessel", 2, 24000);

	// print the details of each vehicle
    printVehiclesRoster(vehiclesArray, size);

	// deallocate memory used for array
    if (vehiclesArray != 0) { // If it is not a null pointer
        for (int i = 0; i < size; i++) {
            delete vehiclesArray[i];
        }
        delete[] vehiclesArray;
    }
    return 0;
}

// the mileageEstimate function is an overridden function and will be different depending on the object type
void printVehiclesRoster(Vehicle **vehicles, int size) {
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++) {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " minutes" << endl;
    }
}



