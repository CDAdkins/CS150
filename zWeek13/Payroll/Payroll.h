#pragma once

using namespace std;

class Payroll {
private:
	double hourlyRate;
	double hoursWorked;

public:
	Payroll(double hourly, double hoursWorked);
	Payroll();

	double getGross();
	void setHourlyRate(double hourly);
	void setHoursWorked(double hoursWorked);
};