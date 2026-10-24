/*
Predictions:

Test 1:
Battery = 15
Charging = 0

battery < 20: 1
battery < 20 && !charging: 1
battery == 100 || charging: 0
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

Test 2:
Battery = 15
Charging = 1

battery < 20: 1
battery < 20 && !charging: 0
battery == 100 || charging: 1
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

Test 3:
Battery = 100
Charging = 0
battery < 20: 0
battery < 20 && !charging: 0
battery == 100 || charging: 1
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

Test 4:
Battery = 150
Charging = 0
battery < 20: 0
battery < 20 && !charging: 0
battery == 100 || charging: 0
battery >= 0 && battery <= 100: 0
0 <= battery <= 100: 1

Test 5:
Battery = -5
Charging = 1
battery < 20: 1
battery < 20 && !charging: 0
battery == 100 || charging: 1
battery >= 0 && battery <= 100: 0
0 <= battery <= 100: 1
*/

#include <iostream>
using namespace std;

int main() {
    int battery; bool charging;

    cout << "Enter battery percentage: ";
    cin >> battery;
    
    if (battery < 0 || battery > 100) {
        cout << "Range OK?: NO" << endl;
    }
    else {
        cout << "Range OK?: YES" << endl;
    }

    cout << endl << "Is the phone charging? (0 = No): ";
    cin >> charging;

	if (battery < 20 && !charging) {
		cout << "Saver on?: YES" << endl << endl;
	}
	else {
		cout << "Saver on?: NO" << endl << endl;
	}

    cout << "battery < 20: " << (battery < 20) << endl;
    cout << "battery < 20 && !charging: " << (battery < 20 && !charging) << endl;
    cout << "battery == 100 || charging: " << (battery == 100 || charging) << endl;
    cout << "battery >= 0 && battery <= 100: " << (battery >= 0 && battery <= 100) << endl;
    cout << "0 <= battery <= 100: " << (0 <= battery <= 100) << endl;

    return 0;
}

/*
Actual Outputs:

Test 1: Battery = 15, Charging = 0
Range OK?: YES
Saver on?: YES
battery < 20: 1
battery < 20 && !charging: 1
battery == 100 || charging: 0
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

Test 2: Battery = 15, Charging = 1
Range OK?: YES
Saver on?: NO
battery < 20: 1
battery < 20 && !charging: 0
battery == 100 || charging: 1
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

Test 3: Battery = 100, Charging = 0
Range OK?: YES
Saver on?: NO
battery < 20: 0
battery < 20 && !charging: 0
battery == 100 || charging: 1
battery >= 0 && battery <= 100: 1
0 <= battery <= 100: 1

Test 4: Battery = 150, Charging = 0
Range OK?: NO
Saver on?: NO
battery < 20: 0
battery < 20 && !charging: 0
battery == 100 || charging: 0
battery >= 0 && battery <= 100: 0
0 <= battery <= 100: 1

Test 5: Battery = -5, Charging = 1
Range OK?: NO
Saver on?: NO
battery < 20: 1
battery < 20 && !charging: 0
battery == 100 || charging: 1
battery >= 0 && battery <= 100: 0
0 <= battery <= 100: 1
*/

/*
for 0 <= battery <= 100, they all output 1
because the expression is evaluated as
(0 <= battery) <= 100, which is always true
since (0 <= battery) evaluates to either 0 or 1,
both of which are less than or equal to 100.
*/