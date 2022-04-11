#include <iostream>
#include <math.h>

using namespace std;

// Time Complexity O(n) where n is the number of digits.
int naiveApproach(long int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

// Time Complexity O(1)
int mathematicalApproach(long int n)
{
    return log10(n) + 1;
}

int main()
{
    long int n;
    cout << "Enter any number : ";
    cin >> n;
    cout << "NaiveApproach : " << naiveApproach(n) << endl;
    cout << "Mathematical Approach : " << mathematicalApproach(n) << endl;
}