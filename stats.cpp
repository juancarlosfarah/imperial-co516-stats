#include <cmath>
#include "stats.h"

using namespace std;

/* compute the average of one real number */
double average(double x) {
	return x;
}

/* compute the average of two real numbers */
double average(double x, double y) {
	return (x + y) / 2;
}

/* compute the average of three real numbers */
double average(double x, double y, double z) {
	return (x + y + z) / 3;
}

/* compute the average of four real numbers */
double average(double w, double x, double y, double z) {
	return (w + x + y + z) / 4;
}

/* compute the standard deviation of one real number */
double standard_deviation(double w) {
	double avg = average(w); 
	return sqrt(pow((w - avg), 2));
}

/* compute the standard deviation of two real numbers */
double standard_deviation(double w, double x) {
	double avg = average(w, x);
	double avgs = average(pow((w - avg), 2),
			      pow((x - avg), 2));
	return sqrt(avgs);
}

/* compute the standard deviation of three real numbers */
double standard_deviation(double w, double x, double y) {
	double avg = average(w, x, y);
	double avgs = average(pow((w - avg), 2),
			      pow((x - avg), 2),
			      pow((y - avg), 2)); 
	return sqrt(avgs);
}

/* compute the standard deviation of four real numbers */
double standard_deviation(double w, double x, double y, double z) {
	double avg = average(w, x, y, z);
	double avgs = average(pow((w - avg), 2),
			      pow((x - avg), 2),
			      pow((y - avg), 2), 
			      pow((z - avg), 2)); 
	return sqrt(avgs);
}
