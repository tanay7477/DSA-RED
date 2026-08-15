#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// return org indices --> use two pointer technique
pair<int, int> twoSumProblem(vector<int>&vec, int target)
{
    vector< pair<int , int> > arr;

    for(int i=0 ; i<vec.size() ; i++){
        arr.push_back({vec[i],i});
    }
    sort(arr.begin(), arr.end());

    int n = arr.size();

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int sum = arr[left].first + arr[right].first;

        if (sum == target)
        {
            return {arr[left].second, arr[right].second};
        }
        else if (sum > target)
        {
            right--;
        }
        else if (sum < target)
        {
            left++;
        }
    }
    return{-1,-1};
}

int main()
{
    vector<int> vec = {2,13,8,7,11,15};
    int target = 10;

    pair<int, int> value = twoSumProblem(vec, target);

    if(value.first < 0 || value.second<0){
        cout<<"elements in array doesnot have sum = target";
    }

    cout << "left: " << value.first << " ";
    cout << "right: " << value.second;
}