#pragma once
class Employee
{
public:
	char name[32];
	unsigned int age = 0;
	unsigned int zipcode = 0;
	float wage = 0;
	unsigned int daysWorked = 0;
	int hoursWorkedPerDay[7];
	float tax = 0.1f;
	int totalHours = 0;
	float gIncome = 0;
	float nIncome = 0;

public:
	Employee();
	void Read();
	void Write();
};