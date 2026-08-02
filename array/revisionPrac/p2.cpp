#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int original = num;
    int reversed = 0;
    while (num > 0)
    {

        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    if (original == reversed)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int num;
    cout << "Enter a number to check palindrome : ";
    cin >> num;

    bool result = isPalindrome(num);
    cout << "Is " << num << " a palindrome? : " << (bool)result << endl;
}