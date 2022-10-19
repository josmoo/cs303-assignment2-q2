#include "professionalEmployee.h"

professionalEmployee::professionalEmployee(double yearlySalary, string firstName, string lastName, int employeeID)
	:Employee(firstName, lastName, employeeID) {
	this->yearlySalary = yearlySalary;
}

double professionalEmployee::getYearlySalary() {
	return yearlySalary;
}
void professionalEmployee::setYearlySalary(double yearlySalary) {
	this->yearlySalary = yearlySalary;
}

double professionalEmployee::calculateWeeklySalary() {
	return yearlySalary/52; //52 weeks in a year
}
double professionalEmployee::computeContributedHealthInsurance() {
	return 3.2;//honestly not sure what we were supposed to do for this. it's very vague. so my rule is for pro worker's its 3.2.
}
double professionalEmployee::weeklyAccumulatedVacationDays() {
	return 1; //we are a nice company that supports 4 day work weeks
}

