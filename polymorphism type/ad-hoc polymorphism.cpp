#include <iostream>
using namespace std;

int sum(int x, int y)
{
	int c = x + y;
	return c;
}

string sum(const char* x, const char* y)
{
	string summation(x);
	summation += y;
	return summation;
}

int main()
{
	cout << sum(50, 20)
		<< " :- Integer addition Output\n";
	cout << sum("Polymorphism", " achieved")
		<< " :- String Concatenation Output\n";
}
