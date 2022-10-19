#pragma once
#include "Employee.h"
class professionalEmployee:public Employee{
private:
	double yearlySalary;
public:
	professionalEmployee(double yearlySalary, string firstName, string lastName, int employeeID); //constructor
	double getYearlySalary();
	void setYearlySalary(double yearlySalary);
	double calculateWeeklySalary();
	double computeContributedHealthInsurance();
	double weeklyAccumulatedVacationDays();
};

