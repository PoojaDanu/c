#include <iostream>
using namespace std;
int main()
{
 float annualSalary;
 cout << "Please enter your salary ";
 cin >> annualSalary;
 float monthlySalary = annualSalary/12;
 cout << "monthly salary is " << monthlySalary;   
}