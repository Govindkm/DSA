#include <iostream>
using namespace std;

// Worst case: O(n)
bool Naive_isPrime(int n)
{
    if (n == 1 || n == 2)
    {
        return false;
    }
    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
// Worst case: O(sqrt(n))
bool isPrime(int n)
{
    for (int i = 2; i * i < n; ++i)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

bool Efficient_isPrime(int n)
{
    if (n == 2 || n == 3)
    {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i < n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main()
{
    int n = 7;
    cout << "Naive IsPrime " << n << " : " << Naive_isPrime(n) << endl;
    cout << "IsPrime " << n << " : " << isPrime(n) << endl;
    cout << "Efficient IsPrime " << n << " : " << Efficient_isPrime(n) << endl;
    return 1;
}