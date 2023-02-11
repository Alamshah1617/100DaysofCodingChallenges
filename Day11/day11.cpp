
// Day 11 coding Statement:  Write a program to find Fibonacci series up to n
// Description: Fibonacci series is a special series where nth term is the sum of previous two terms in the series. The series starts with 0 and 1 as the first and second term of the series respectively.
// Here you need to get the value for nth term from user and then print Fibonacci series containing n terms.
// Input: 5
// Output: 0,1,1,2,3
// Input: 8
// Output: 0,1,1,2,3,5,8,13

#include <iostream>
using namespace std;

class Fibonacci {
public:
	int a, b, c;
	void generate(int);
};

void Fibonacci::generate(int n)
{
	a = 0;
	b = 1;

	cout << a << " " << b;

	for (int i = 1; i <= n - 2; i++) {
		c = a + b;
		cout << " " << c;
		a = b;
		b = c;
	}
}
int main()
{
	int n;
	cout<<"Input: ";
	cin>>n;
	cout<<"Output: ";

	Fibonacci fib;
	fib.generate(n);
	return 0;
}

