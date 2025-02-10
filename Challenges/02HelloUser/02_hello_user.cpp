/*
2) Write a program that reads a person's name and displays a welcome message for them:  
Example:  
What is your name? John Doe  
Hello John Doe, it's a pleasure to meet you!
*/

#include <iostream>
using namespace std;

int main () {

  string name;

  cout << "What is your name ?";
  cin >> name;

  cout << "Hello, " << name << "!" << endl;
  
  cout << "Press Enter to Exit !";
  cin.get();
  cin.get();

  return 0;
}