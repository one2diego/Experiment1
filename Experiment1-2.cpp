#include <iostream>

using namespace std;

int main()
{
	double mass, density, volume;
	cout << "Input the Mass, in grams, and Density, in grams per cubic centimeters, and Output the Volume of the object." << endl;
	cout << "Input Mass" << endl;
	cin >> mass;
	cout << "Input Density" << endl;
	cin >> density;

	volume = mass / (4 * density) ;

	cout << "Volume= " << volume << "cm^3" << endl;

	system ("pause"); 
	return 0;
}