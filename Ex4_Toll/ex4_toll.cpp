/*
READ balance
READ toll

IF balance >= toll THEN
    COMPUTE balance = balance - toll
    DISPLAY "Gate open"
    DISPLAY balance
ELSE
    DISPLAY "Insufficient balance. Please reload."
    DISPLAY toll - balance
ENDIF
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double balance, toll;

	cout << "Enter your balance: ";
	cin >> balance;
	cout << "Enter the toll amount: ";
	cin >> toll;

	if (balance >= toll) {
		balance -= toll;
		cout << endl << "Gate open" << endl;
		cout << fixed << setprecision(2) << "Remaining balance: RM" << balance << endl;
	}
	else {
		cout << endl << "Insufficient balance. Please reload." << endl;
		cout << fixed << setprecision(2) << "You need to add: RM" << (toll - balance) << endl;
	}
	return 0;
}

/*
Test 1:
Enter your balance: 10.00
Enter the toll amount: 5.30

Gate open
Remaining balance: RM4.70

Test 2:
Enter your balance: 5.30
Enter the toll amount: 5.30

Gate open
Remaining balance: RM0.00

Test 3:
Enter your balance: 5.29
Enter the toll amount: 5.30

Insufficient balance. Please reload.
You need to add: RM0.01

Test 4:
Enter your balance: 0.00
Enter the toll amount: 2.10

Insufficient balance. Please reload.
You need to add: RM2.10
*/