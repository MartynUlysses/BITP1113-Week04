/*
READ hour (0–23)

IF hour >= 23 OR hour < 6 THEN
    DISPLAY "Late entry: sign the log book"
    DISPLAY "Show your matric card"
ELSE
    DISPLAY "Welcome back"
ENDIF

DISPLAY "Good night"
*/

#include <iostream>
using namespace std;

int main() {
	int hour;

	cout << "Enter the hour (0-23): ";
	cin >> hour;

	if (hour >= 23 || hour < 6) {
		cout << endl << "Late entry: sign the log book" << endl;
		cout << "Show your matric card" << endl;
	}
	else {
		cout << endl << "Welcome back" << endl;
	}
	cout << endl << "Good night" << endl;
	return 0;
}

/*
Test 1:
Enter the hour (0-23): 22

Welcome back

Good night

Test 2:
Enter the hour (0-23): 23

Late entry: sign the log book
Show your matric card

Good night

Test 3:
Enter the hour (0-23): 0

Late entry: sign the log book
Show your matric card

Good night

Test 4:
Enter the hour (0-23): 5

Late entry: sign the log book
Show your matric card

Good night

Test 5:
Enter the hour (0-23): 6

Welcome back

Good night
*/