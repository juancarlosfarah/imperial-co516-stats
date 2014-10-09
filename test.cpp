#include <iostream>
#include "stats.h"

using namespace std;

/* function prototypes */
void test_one_value(double);
void test_two_values(double, double);
void test_three_values(double, double, double);
void test_four_values(double, double, double, double);

int main() {
	cout << "This program test the functions in the stats.h file." << endl;
	
	cout << "Testing one value (5):" << endl;
	test_one_value(5);

	cout << "Testing two values (4, 8):" << endl;
	test_two_values(4, 8);	

	cout << "Testing three values (5, 7, 9):" << endl;
	test_three_values(5, 7, 9);

	cout << "Testing four values (1, 2, 3, 4):" << endl;
	test_four_values(1, 2, 3, 4);

}

void test_one_value(double w) {
	cout << "Avg: " << average(w) << endl;
	cout << "SD: " << standard_deviation(w) << endl;
	return;
}

void test_two_values(double w, double x) {
	cout << "Avg: " << average(w, x) << endl;
	cout << "SD: " << standard_deviation(w, x) << endl;
	return;
}

void test_three_values(double w, double x, double y) {
	cout << "Avg: " << average(w, x, y) << endl;
	cout << "SD: " << standard_deviation(w, x, y) << endl;
	return;
}

void test_four_values(double w, double x, double y, double z) {
	cout << "Avg: " << average(w, x, y, z) << endl;
	cout << "SD: " << standard_deviation(w, x, y, z) << endl;
	return;
}
