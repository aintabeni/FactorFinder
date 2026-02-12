#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Basic functionality

    // Accept Number To Calculate The Factors
    int num;
    cout << "Enter the number you want the factor of: \n";
    cin >> num;

    // Display The Output
    for(int j=2;j<=num;j++){
    cout << "\nThe factors of " << j << ": ";
    for (int i = 2; i <= j/2; i++)
    {

        if (j % i == 0)
            cout << i << " ";
    }
    }

}
