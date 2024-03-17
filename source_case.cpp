#include<iostream>
#include<string>
#include<locale>
#include<Windows.h>
using namespace std;
void ChangingCase(string ss) {
	cout << "To lower case: ";
	for (int i = 0; i < ss.length(); i++) {
		putchar(tolower(ss[i]));
	}
	cout << endl;
	cout << "To upper case: ";
	for (int i = 0; i < ss.length(); i++) {
		putchar(toupper(ss[i]));
	}

}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	locale ru{ "ru_RU.UTF-8" };
	string ss = "";
	cout << "Enter the string: ";
	getline(cin, ss);
	ChangingCase(ss);
	return 0;
}