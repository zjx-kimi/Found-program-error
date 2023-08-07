#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;
const int Mod = 1e9 + 7;
int n;
void sleep (int x = 100) {
	for (int i = 1; i <= 3; i++) {
		Sleep (x);
		cout << '.';
	}
	return;
}
void user (int x) {
	cout << "Make sure that g++.exe has been added to the environment variable\n";
	cout << "Please make sure that the standard procedure has been written to the std.cpp\n";
	cout << "Please make sure that the standard procedure has been written to the UnAC.cpp\n";
	cout << "Make sure that the data generator is written to the gen.cpp\n";
	system ("pause");
	system ("cls");
	/*-----------------------------------*/
	cout << "Deleting files";
	sleep (x);
	system ("del std.exe & del gen.exe & del UnAc.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "Compiling standard code";
	sleep (x);
	system ("g++.exe std.cpp -o std.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "Compiling error code";
	sleep (x);
	system ("g++.exe UnAC.cpp -o UnAC.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "Compiling data generator";
	sleep (x);
	system ("g++.exe gen.cpp -o gen.exe");
	system ("cls");
	/*-----------------------------------*/
	system ("cls");
	while (1) {
		cout << "Generating input file";
		sleep (x);
		system("gen.exe >Data.in");
		system("cls");
		cout << "Generating correct answers";
		sleep (x);
		system("std.exe <Data.in >ans.ans");
		system("cls");
		cout << "Generating wrong answers";
		sleep (x);
		system("UnAC.exe <Data.in >ans.out");
		system("cls");
		if (system("fc ans.out ans.ans")) {
			cout << "An error was found, please check";
			sleep(x);
			system("pause");
		}
	}
}
int main() {
	cout << "Please enter the scheme you want to use\n";
	cout << "1. Slow mode, good quality\n";
	cout << "2. Fast mode, poor quality\n";
	cout << "3. Custom mode\n";
	cin >> n;
	if (n == 1) {
		user(100);
	} else if (n == 2) {
		user(10);
	} else {
		cout << "If the input number is x, then the usage time is 3x × test points, and the larger the x, the better the quality. \nPlease enter x:";
		int x;
		cin >> x;
		user (x);
	}
	return 0;
}
