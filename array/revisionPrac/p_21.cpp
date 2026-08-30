#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> &arr, int target)
{

    int s = 0;
    int e = arr.size() - 1;
    int n = arr.size();
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        if (arr[mid] > target)
        {
            e = mid - 1;
        }
        if (arr[mid] < target)
        {
            s = mid + 1;
        }
    }
    return ans;
}

int lastOccurence(vector<int> &arr, int target)
{

    int s = 0;
    int e = arr.size() - 1;
    int n = arr.size();
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        cout << "now s=" << s << " now e=" << e;
        cout << endl;

        if (arr[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        if (arr[mid] > target)
        {
            e = mid - 1;
        }
        if (arr[mid] < target)
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> vec = {10, 20, 20, 20, 30, 40, 40, 50};
    int target = 50;
    int firstOccur = firstOccurence(vec, target);
    int lastOccur = lastOccurence(vec, target);

    int totalOccur = lastOccur - firstOccur + 1;

    cout << "firstOccur : " << firstOccur << endl;
    cout << "lastOccur : " << lastOccur << endl;
    cout << "totaltOccur : " << totalOccur << endl;
}
