/*
READ parcel weight in kg
SET fee = 8.00

IF weight > 2.0 THEN
    SET fee = fee + 5.00
    DISPLAY "Heavy parcel: RM5.00 surcharge added"
ENDIF

DISPLAY fee
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, fee = 8.00;

    cout << "Enter parcel weight in kg: ";
    cin >> weight;

    if (weight > 2.0) {
        fee += 5.00;
        cout << "Heavy parcel: RM5.00 surcharge added" << endl;
    }

    cout << fixed << setprecision(2) << "Total fee: RM" << fee << endl;

    return 0;
}

/*
Output:

Test 1:
Enter parcel weight in kg: 1.5
Total fee: RM8.00

Test 2:
Enter parcel weight in kg: 2.0
Total fee: RM8.00

Test 3:
Enter parcel weight in kg: 2.1
Heavy parcel: RM5.00 surcharge added
Total fee: RM13.00

Test 4:
Enter parcel weight in kg: 7.25
Heavy parcel: RM5.00 surcharge added
Total fee: RM13.00
*/