/*

5) Write a program that reads a student's two grades in a subject and shows their average in the subject.
Example:
Grade 1: 4.5
Grade 2: 8.5
The average between 4.5 and 8.5 is equal to 6.5.

*/

#include <iostream>
using namespace std;

int main () {

  float grade1, grade2, average;

  cout << "Type the first grade: ";
  cin >> grade1;

  cout << "Type the second grade: ";
  cin >> grade2;

  average = (grade1 + grade2) / 2;

  cout << "The average of " << grade1 << " and " << grade2 << " is " << average << endl;

  cout << "Press Enter to Exit !";
  cin.get();
  cin.get();

  return 0;
}