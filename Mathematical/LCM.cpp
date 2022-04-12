#include <iostream>
#include "./GCD.cpp"
using namespace std;

int Naive_LCM(int a, int b)
{
    int c = a > b ? a : b;
    while (true)
    {
        if (c % a == 0 && c % b == 0)
        {
            return c;
        }
        c++;
    }

    return c;
}

int LCM(int a, int b);

int main()
{
    cout << Naive_LCM(15, 20) << endl;
    cout << Naive_LCM(15, 20) << endl;
    return 1;
}

int LCM(int a, int b)
{
    return a * b / GCD_Recursive_Euclid(a, b);
}