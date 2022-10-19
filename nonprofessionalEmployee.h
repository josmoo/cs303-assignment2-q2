#pragma once
#include "Employee.h"
class nonprofessionalEmployee : public Employee{
private:
	double hourlyRate;
	int hoursWorkedPerWeek;

public:
	nonprofessionalEmployee(double hourlyRate, int hoursWorkedPerWeek, string firstName, string lastName, int employeeID); //constructor
	double getHourlyRate();
	void setHourlyRate(double hourlyRate);
	int getHoursWorkedPerWeek();
	void setHoursWorkedPerWeek(int hoursWorkedPerWeek);
	double calculateWeeklySalary();
	double computeContributedHealthInsurance();
	double weeklyAccumulatedVacationDays();
};

