#include<iostream>
#include<vector>
using namespace std;


int firstOccurrenceOfElem(vector<int>&arr , int target){
    int n = arr.size();
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid = s+(e-s)/2;

        if(arr[mid] == target){
             ans = mid;
            e=mid-1;
        }
         if(arr[mid]<target)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
    return ans;
}


int main(){

    vector<int> arr = {10,10,20,20,20,30,40,40,50};
    int n =arr.size();
    int target  =10 ;

    int ans = firstOccurrenceOfElem(arr , target);

    cout<<" index : "<<ans;
}
