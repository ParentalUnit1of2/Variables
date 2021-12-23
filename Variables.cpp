// This program will help with figuring annual and monthly salary

#include <iostream>
using namespace std;

int main()
{
	float annualSalary; 
	cout << "Please enter your annual salary ";
	cin >> annualSalary;
	float monthlySalary = annualSalary / 12;

	// name variable according to purpose ie: monthlySalary, annualSalary
	// variables cannot contain special characters or spaces
	// varriables cannot start with a number
	cout << "Your monthly salary is " << monthlySalary<<endl;
	cout << "In 10 years you will earn " << annualSalary * 10;

	char character = 'a'; 
	system("pause > 0");
}
