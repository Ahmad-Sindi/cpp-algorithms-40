// Algorithm Challenge
// 40 - Service Fee and Sales Tax
// This program calculates the final bill after adding a 10% service fee, and a 16% sales tax.

#include <iostream>
using namespace std;

int main()
{
    float billValue;

    // Ask the user for the original bill value
    cout << "Enter the bill value: ";
    cin >> billValue;

    // Calculate service fee (10%)
    float serviceFee = billValue * 0.10;

    // Calculate subtotal (after service fee)
    float afterService = billValue + serviceFee;

    // Calculate sales tax (16%)
    float salesTax = afterService * 0.16;

    // Calculate final total
    float total = afterService + salesTax;

    // Output details
    cout << "\n--- Bill Breakdown ---\n";
    cout << "----------------------\n";
    cout << "Original Bill: " << billValue << endl;
    cout << "Service Fee (10%): " << serviceFee << endl;
    cout << "Sales Tax (16%): " << salesTax << endl;
    cout << "----------------------\n";
    cout << "Total Amount to Pay: " << total << endl;

    return 0;
}
