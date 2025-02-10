/*
 4) Develop an algorithm that reads two integers and shows the sum between them.  
Example:  
Enter a value: 8  
Enter another value: 5  
The sum between 8 and 5 is equal to 13.
*/


#include <iostream>
using namespace std;

int main() {

  int num1, num2, sum;

  cout << "Type a number: ";
  cin >> num1;

  cout << "Type another number: ";
  cin >> num2;

  sum = num1 + num2;

  cout << "The sum between " << num1 << " and " << num2 << " is equal to " << sum << endl;

  cout << "Press Enter to Exit !";
  cin.get();
  cin.get();

  return 0;
}