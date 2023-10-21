#include <iostream>
using namespace std;
int leap(int year){
    if (year % 400 == 0 || year% 4 == 0) {
    cout << year << " is a leap year.";
  }
  else
  {
    cout << year << " is not a leap year.";
  }
}
int main() {

  int year;
  cout << "Enter a year: ";
  cin >> year;
  leap(year);
  return 0;
}
