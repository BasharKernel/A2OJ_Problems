#include<iostream>
using namespace std;
int main() {
	int a;
	char b[][8] = { "Sheldon","Leonard","Penny","Rajesh","Howard" };
	cin >> a;
	while (a>5)a = a / 2 - 2;
	cout << b[a - 1];
	return 0;
}