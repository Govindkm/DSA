#include <iostream>
using namespace std;

long int factorial_recursive(int n);
long int factorial_iterative(int n);

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Factorial recursive : " << factorial_recursive(n) << endl
         << "Factorial iterative : " << factorial_iterative(n) << endl;
    return 1;
}

// Time Complexity: O(n) with recursion tree T(n) = T(n-1) + T(1), Space complexity: O(n)
long int factorial_recursive(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial_recursive(n - 1);
}

// Time Complexity: O(n), Space complexity: O(1)
long int factorial_iterative(int n)
{
    long int i = 1;
    while (n > 0)
    {
        i = i * n;
        n--;
    }

    return i;
}