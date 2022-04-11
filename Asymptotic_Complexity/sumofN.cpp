#include <iostream>
#include <time.h>

using namespace std;

// Method1-Recursion
long int sumN1(long int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sumN1(n - 1);
}

// Method2-direct Formula
long int sumN2(long int n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    long int num;
    time_t before, after;
    double difference;
    cout << "Enter a number to check: ";
    cin >> num;
    time(&before);
    cout << "Method 1 : " << sumN1(num) << endl;
    time(&after);
    difference = double(after - before);
    cout << "Clock : " << difference << endl;

    time(&before);
    cout << "Method 1 : " << sumN2(num) << endl;
    time(&after);
    difference = double(after - before);
    cout << "Clock : " << difference << endl;
}