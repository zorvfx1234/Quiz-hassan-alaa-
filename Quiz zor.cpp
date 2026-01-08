/*
# Quiz 1 - Electricity Consumption Evaluation System

Full Name: [حسن علاء عبد المنعم ]
Group: [A1]

*/


#include <iostream>
using namespace std;
 int main() {
    int x, y, total;

    cout << "Enter consumption: ";
    cin >> x;

    if (x <= 100) {
        y = 250;
    } 
    else if (x <= 300) {
        y = 300;
    } 
    else {
        y = 350;
    }

    total = x * y;

    cout << "Electricity Consumption: " << x << endl;
    cout << "Price Per Unit: " << y << endl;
    cout << "Total Bill: " << total << endl;

    if (total > 100000) {
        cout << "High consumption - Please reduce usage" << endl;
    } 
    else {
        cout << "Normal consumption" << endl;
    }

    return 0;
}
﻿
