#include <iostream>
using namespace std;

bool isPalindrome(int n);

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (isPalindrome(n))
    {
        cout << "Entered number is a palindrome." << endl;
    }
    else
    {
        cout << "Entered number is not a palindrome" << endl;
    }
    return 1;
}

// Time complexity : O(n) where n is number of digits in the number
bool isPalindrome(int n)
{

    int r, temp;
    temp = n;
    r = 0;
    while (temp > 0)
    {
        r = temp % 10 + r * 10;
        temp = temp / 10;
    }

    if (n != r)
    {
        return false;
    }

    return true;
}