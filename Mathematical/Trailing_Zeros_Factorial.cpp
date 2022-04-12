#include <iostream>
using namespace std;

// Time complexity: O(log5(n)) where n is the number which user provides
int countZeros(int n)
{
    int d = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        d += n / i;
    }

    return d;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Number of zeroes: " << countZeros(n) << endl;
    return 1;
}