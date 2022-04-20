// FCAI – Programming 1 – 2022 - Assignment 2 
// Program Name: calculate exponential (e^x)
// Program Description: calculate (e^x) with this equation (1 + x + x^2/2! + x^3/3! + ... + x^n/n!)
// Last Modification Date: 24/3/2022
// Author / ID : Ahmed Reda Elsayed / 20210018 
// Under The Supervision of: Dr. Mohamed El-Ramly

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double e = 0.0, factorial = 1;
    double x, y = 1.0;
    int n, i, num_of_terms, new_line = 1;

    cout << "Enter the degree of the exp (e^x): ";
    cin >> x;
    cout << "Enter number of terms: ";
    cin >> num_of_terms;

    for (n = 0; n < num_of_terms; n++)
    {
        factorial = 1, y = 1;
        for (i = 1; i <= n; i++)
        {
            factorial *= i; // calculate factorial (n!)
            y *= x; // calculate (x^n)
        }

        e += (y / factorial); // calculate each term in the equation that calculate (e^x)
        cout << "e = " << e << " \\ ";
        if (new_line == 8) // to make all printed output shown and fit on the screen
        {
            new_line = 1;
            cout << endl << endl;
        }
        else
        {
            new_line++;
        }
    }
    cout << "Result without exp function = " << e << endl;
    cout <<"Result with exp function = " << exp(x) << endl; // calculate(e ^ x) with the built - in function as mentioned in the problem
                                                            // to compare and check between outputs
}