#pragma once
#include <string>
using namespace std;
class Employee{
protected:
	string firstName;
	string lastName;
	int employeeID;
public:
	Employee(string fName, string lName, int employeeID);
	string getFirstName();
	string getLastName();
	int getEmployeeID();
	void setFirstName(string fName);
	void setLastName(string lName);
	void setEmployeeID(int ID);
	void printEmployee(); //prints all protected member variables of employee to standard output
	virtual double calculateWeeklySalary() = 0;
	virtual double computeContributedHealthInsurance() = 0;
	virtual double weeklyAccumulatedVacationDays() = 0;
};

