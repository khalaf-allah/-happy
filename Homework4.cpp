/* Name: Khalafallah Abd-Alraheem
 * Class: 2nd Class
 * Department : Computer Engineer
*/

#include <iostream>
// including input/output library
#include <cmath>
// including math library before heading towards the program
// perciesly we're using it here just for the square root function
#include <cstring>
// including cstring library so we're able to perform common string functions
using namespace std;
char shape[10];
float area, rib, circumference, rib1, apothem, rib2, rib3, height, width, length, base, radius, diameter, angle;
// definition of float so we can deal with fractions
double const pi = 3.14;
int main()
//it means our function needs to return some integer
// at the end of the execution, which we do it by return 0
{
	loop:
// loop statement to allow multiple (infinite) execution of a block code
// until a particular condition is satisfied, then it breaks
	cout << "Shapes: \nT, R, S, C, P, E" << endl;
	cout << "\nChoosing: ";
	cin >> shape;
	if (strcmp(shape, "T") == 0){
// using if condition along with strcmp to compare strings of a given
// and inserted one's, strcmp is summoned via cstring library
		cout << "Enter triangle base: ";
		cin >> base;
		cout << "Enter triangle height: ";
		cin >> height;
		cout << "Enter the first side triangle: ";
		cin >> rib1;
		cout << "Enter the sencond side triangle: ";
		cin >> rib2;
		cout << "Enter the third side triangle: ";
		cin >> rib3;
		area = 0.5 * base * height;
		circumference = rib1 + rib2 + rib3;
	}
	else if (strcmp(shape, "R") == 0){
		cout << "Enter rectangle width: ";
		cin >> width;
		cout << "Enter rectangle height: ";
		cin >> height;
		area = width * height;
		circumference = 2 * (height + width);
	}
	else if (strcmp(shape, "S") == 0){
		cout << "Enter side quire length: ";
		cin >> length;
		area = length * length;
		circumference = 4 * length;
	}
	else if (strcmp(shape, "C") == 0){
		cout << "Enter circle radius: ";
		cin >> radius;
		area = pi * radius * radius;
		circumference = 2 * pi * radius;
	}
	else if (strcmp(shape, "P") == 0){
		cout << "Enter polygon apothem: ";
		cin >> apothem;
		cout << "Enter polygon side length: ";
		cin >> length;
		area = 0.5 * apothem * 5 * length;
		circumference = length * 5;
	}
	else if (strcmp(shape, "E") == 0){
		double maj,min;
// double has been defined as a supporter for fraction inputs and outputs
// and appearently it can't be universally defined
		cout << "Enter ellipse big axis: ";
		cin >> maj;
		cout << "Enter ellipse small axis: ";
		cin >> min;
		area = pi * maj * min;
		circumference = 2 * pi * sqrt(((maj * maj)+ (min * min)) * 0.5);
	}
	else {
		cout << "\nWrong\n";
		goto loop;
// repeat the iterative loop after failure to satisfy the condition
	}
	cout << "\n" << "Area: " << area << endl;
	cout << "Circumference: " << circumference << endl;
// this part has been specificlly placed here for viewing the result
	return 0;
// returning to the main() a success sign, getting it ready to terminate
}
