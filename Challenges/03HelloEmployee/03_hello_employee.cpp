/*
  3) Create a program that reads an employee's name and salary, displaying a message at the end.
  Example:
  Employee's Name: Jane Doe
  Salary: 1850.45
  The employee Jane Doe has a salary of $1850.45 in June.
*/

#include <iostream>
using namespace std;

int main() {
  string name;
  int salary;

  cout << "What is your name ?";
  cin >> name;

  cout << "What is your salary ?";
  cin >> salary;

  cout << "The Employee " << name << " has a salary of" << salary << " in June" << endl;
   
  cout << "Press Enter to Exit !";
  cin.get();
  cin.get();

  return 0;
}