#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "What is your name?\n"; //Asking for a user's name
	string name; //var with a username
	cin >> name; //binding a name to the var
	cout << "Hello, " << name << endl; //Greeting the user - изменение для конфликта
	return 0;
}
