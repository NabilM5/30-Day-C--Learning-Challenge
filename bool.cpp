#include <iostream>
using namespace std;

int main() {
	bool faster = true;
	bool slowly = false;
	cout << std::boolalpha; // This will print bool as true or false.
	cout << "Are you faster " << faster << "\n"; // Corrected \n and added quotes.
	cout << "Are you slowly	" << slowly << endl; // Added std::endl to new line.
	return 0;
}
