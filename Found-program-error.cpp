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
	cout << "请确保 g++.exe 已添加到环境变量\n";
	cout << "请确保已将标程写入 std.cpp 中\n";
	cout << "请确保已将标程写入 UnAC.cpp 中\n";
	cout << "请确保已将数据生成器写入 gen.cpp 中\n";
	system ("pause");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在删除文件";
	sleep (x);
	system ("del std.exe & del gen.exe & del UnAc.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在编译标程代码";
	sleep (x);
	system ("g++.exe std.cpp -o std.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在编译错误代码";
	sleep (x);
	system ("g++.exe UnAC.cpp -o UnAC.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在编译数据生成器";
	sleep (x);
	system ("g++.exe gen.cpp -o gen.exe");
	system ("cls");
	/*-----------------------------------*/
	system ("cls");
	while (1) {
		cout << "正在生成输入文件";
		sleep (x);
		system("gen.exe >Data.in");
		system("cls");
		cout << "正在生成正确答案";
		sleep (x);
		system("std.exe <Data.in >ans.ans");
		system("cls");
		cout << "正在生成错误答案";
		sleep (x);
		system("UnAC.exe <Data.in >ans.out");
		system("cls");
		if(system("fc ans.out ans.ans")) {
			cout << "发现错误，请查看";
			sleep(x);
			system("pause");
		}
	}
}
int main() {
	cout << "请输入你要使用的方案\n";
	cout << "1. 慢速模式、质量好\n";
	cout << "2. 快速模式、质量差\n";
	cout << "3. 自定义模式\n";
	cin >> n;
	if (n == 1) {
		user(100);
	} else if (n == 2) {
		user(10);
	} else {
		cout << "请输入x:";
		int x;
		cin >> x;
		user (x);
	}
	return 0;
}
