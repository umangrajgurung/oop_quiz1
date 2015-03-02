/*
 Program: Question 4 from quiz 1.
 Name : Umang Raj Gurung
 Roll: 0315
 Output: 44	
*/

#include<iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int* p;
	int* q;
	a = 3;
	p = &a;
	q = p;
	b = 4;
	*q = b;
	cout << *p << a;
}
