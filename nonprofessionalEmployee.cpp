#include "nonprofessionalEmployee.h"


nonprofessionalEmployee::nonprofessionalEmployee(double hourlyRate, int hoursWorkedPerWeek, string firstName, string lastName, int employeeID)
	:Employee(firstName, lastName, employeeID) {
	this->hourlyRate = hourlyRate;
	this->hoursWorkedPerWeek = hoursWorkedPerWeek;
}

double nonprofessionalEmployee::getHourlyRate() {
	return hourlyRate;
}
void nonprofessionalEmployee::setHourlyRate(double hourlyRate) {
	this->hourlyRate = hourlyRate;
}

int nonprofessionalEmployee::getHoursWorkedPerWeek() {
	return hoursWorkedPerWeek;
}

void nonprofessionalEmployee::setHoursWorkedPerWeek(int hoursWorkedPerWeek) {
	this->hoursWorkedPerWeek = hoursWorkedPerWeek;
}

double nonprofessionalEmployee::calculateWeeklySalary() {
	return hourlyRate * hoursWorkedPerWeek;
}
double nonprofessionalEmployee::computeContributedHealthInsurance() {
	return 2;//honestly not sure what we were supposed to do for this. it's very vague. so my rule is it's 2.
}
double nonprofessionalEmployee::weeklyAccumulatedVacationDays() {
	return hoursWorkedPerWeek / 40; //1 full week of work = 1 day off
}
