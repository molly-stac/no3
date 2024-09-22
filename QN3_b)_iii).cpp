#include <iostream>
using namespace std;

int main() {
    double balance, totalCost = 0.0, surcharge = 0.0;
    int units;

    cout << "Enter the amount of money loaded onto your account (UGX): ";
    cin >> balance;
    cout << "Enter the number of water units consumed: ";
    cin >> units;

    if (units <= 10) {
        totalCost = units * 150; 
    } else if (units <= 20) {
        totalCost = (10 * 150) + ((units - 10) * 175);
    } else {
        totalCost = (10 * 150) + (10 * 175) + ((units - 20) * 200);
    }

    surcharge = totalCost * 0.15;
    totalCost += surcharge;

    // Outputs the total cost after applying the surcharge
    cout << "Total cost after applying the 15% surcharge: " << totalCost << " UGX" << endl;

    return 0;
}

