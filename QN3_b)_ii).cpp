#include <iostream>
using namespace std;

int main() {
    double balance;
    int units;
    double totalCost = 0.0;

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
    cout << "Total cost before surcharge and VAT: " << totalCost << " UGX" << endl;

    return 0;
}

