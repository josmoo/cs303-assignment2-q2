#pragma once
#include "professionalEmployee.h"
#include "nonprofessionalEmployee.h"


int main() {
	professionalEmployee pro1(60000, "Jill", "Jackson", 13);
	pro1.printEmployee();
	
	nonprofessionalEmployee pro2(22.2, 40, "Bob", "Miller", 22);
	pro2.printEmployee();

	return 0;
}