/*
 Program: Question 3 from quiz 1.
 Name : Umang Raj Gurung
 Roll: 0315
 Output: 10	
*/

#include<iostream>

using namespace std;

void doubleref(int* p) { (*p) = (*p) * 2; }
int main() {
	int a = 5;
	doubleref(&a);
	cout << a;
}

