#include "Payroll.h"

using namespace std;

Payroll::Payroll(double hourly, double hoursWorked) {
	hourlyRate = hourly;
	this->hoursWorked = hoursWorked;
}

Payroll::Payroll() {
	hourlyRate = 15;
	hoursWorked = 40;
}

double Payroll::getGross() {
	return hoursWorked * hourlyRate;
}

void Payroll::setHourlyRate(double hourly) {
	this->hourlyRate = hourly;
}
void Payroll::setHoursWorked(double hoursWorked) {
	this->hoursWorked = hoursWorked;
}