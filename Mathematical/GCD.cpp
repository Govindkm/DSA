#include <iostream>
using namespace std;

int GCD_Recursive_Euclid(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return GCD_Recursive_Euclid(b, a % b);
}

int Naive_GCD(int a, int b)
{
    int c = a < b ? a : b;
    while (c > 0)
    {
        if (a % c == 0 && b % c == 0)
        {
            return c;
        }
        c--;
    }

    return 1;
}

// int main()
// {

//     cout << GCD_Recursive_Euclid(48, 16) << endl;
//     cout << Naive_GCD(48, 16) << endl;
//     return 1;
// }