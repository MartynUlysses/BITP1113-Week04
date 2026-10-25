#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int daysLate;
	double fine = 0.0;
    //BUG 5 RUNTIME ERROR: Uninitialized variable caused Run-Time Check Failure #3 when daysLate was 0, fixed by initializing fine to 0.0

    cout << "Days late: ";
    cin >> daysLate;

	if (daysLate > 0) //BUG 1 LOGIC ERROR: should not have a semicolon, it becomes an empty statement
        fine = daysLate * 0.50;

	if (daysLate == 0) //BUG 2 LOGIC ERROR: should be daysLate == 0 instead of daysLate = 0
        cout << "Returned on time. No fine." << endl;

	if (daysLate >= 14) //BUG 3 LOGIC ERROR: should be daysLate >= 14 instead of daysLate > 14
    {
        cout << "Membership suspended." << endl;
        cout << "Contact the library counter." << endl;
	} //BUG 4 LOGIC ERROR: missing braces for the if statement, line 21 will always execute regardless of the condition
    
    cout << fixed << setprecision(2) << "Fine: RM" << fine << endl;
	//not bug but a good practice to set precision for monetary values
    return 0;
}