#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "What is your name?\n"; //Asking for a user's name
	string name;
	cin >> name;
	cout << "Hello, " << name << endl; //Greeting the user
	return 0;
}