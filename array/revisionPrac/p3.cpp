#include <iostream>
using namespace std;

bool isPowerOfTwo(int num)
{
    if ((num & (num - 1)) == 0 )
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
    cout << "Enter a number to check whether it is power of 2 or not: ";
    cin >> num;

    bool result = isPowerOfTwo(num);
    cout << "Is " << num << " a power of 2? : " << (bool)result << endl;
}