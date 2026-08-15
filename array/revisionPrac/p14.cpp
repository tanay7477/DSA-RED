#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// values return kro --> use two pointer technique
pair<int, int> twoSumProblem(vector<int> arr, int target)
{

    sort(arr.begin(), arr.end());

    int n = arr.size();

    int first = 0;
    int last = n - 1;

    while (first <= last)
    {
        int sum = arr[first] + arr[last];

        if (sum == target)
        {
            return {first, last};
        }
        else if (sum > target)
        {
            last--;
        }
        else if (sum < target)
        {
            first++;
        }
    }
    return{-1,-1};
}

int main()
{
    vector<int> vec = {121,15};
    int target = 28;

    pair<int, int> value = twoSumProblem(vec, target);

    if(value.first < 0 || value.second<0){
        cout<<"elements in array doesnot have sum = target";
    }

    cout << "first: " << value.first << " ";
    cout << "last: " << value.second;
}