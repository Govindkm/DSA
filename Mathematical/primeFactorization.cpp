#include <iostream>
#include <vector>
#include "./isPrime.cpp"
using namespace std;

void Naive_primeFactors(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (isPrime(i))
        {
            int temp = n;
            while (temp % i == 0)
            {
                cout << i << " ";
                temp = temp / i;
            }
        }
    }
}

int main()
{
    cout << "Prime factors " << endl;
    Naive_primeFactors(84);
    return 1;
}