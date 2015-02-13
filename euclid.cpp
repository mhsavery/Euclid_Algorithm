#include <iostream>
using namespace std;

int main() {

	int a, b, temporary, remainder;
 
    cout << "\nEnter your first number: ";
	cin >> a;

    cout << "\nEnter your second number: ";
	cin >> b;

	if (a < b) {
		temporary = a;
		a = b;
		b = temporary;
	}
 	remainder = a;

    while (remainder != 0) {
		temporary = remainder;
		remainder = b % remainder;
		b = temporary;
	}
    
    cout << "\nThe greatest common denominator of your two numbers is: " << b << endl;

return(0);
}
