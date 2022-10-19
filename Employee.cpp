#include "Employee.h"
#include <iostream>
Employee::Employee(string fName, string lName, int employeeID) {
	this->firstName = fName;
	this->lastName = lName;
	this->employeeID = employeeID;
}

string Employee::getFirstName() {
	return firstName;
}
string Employee::getLastName() {
	return lastName;
}
int Employee::getEmployeeID() {
	return employeeID;
}
void Employee::setFirstName(string fName) {
	firstName = fName;
}
void Employee::setLastName(string lName) {
	lastName = lName;
}
void Employee::setEmployeeID(int ID) {
	employeeID = ID;
}

void Employee::printEmployee() {
	cout << firstName << " " << lastName << ", with employee id: " << employeeID << ", has a weekly salary of: " << calculateWeeklySalary()
		<< ", healthcare contribution of: " << computeContributedHealthInsurance() << ", and accumulated "
		<< weeklyAccumulatedVacationDays() << " vacation days this week" << "\n\n";
}