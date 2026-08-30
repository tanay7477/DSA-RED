#include<iostream>
#include<vector>
using namespace std;

int peakIndexIArr(vector<int> arr){
        int s=0;
        int e=arr.size()-1;
        int n= arr.size();
        int mid = s+(e-s)/2;

        if(arr.empty()){
            cout<<"YOUR ARRAY SIZE IS EMPTY SO : ";
            return -1;
        }

        while(s<e){
            
            if(arr[mid] < arr[mid+1]){
                s = mid +1;
            }
            else{
                e = mid;
            }
            mid = (s+e)/2;

        }
        return mid;
}

int main(){


    vector<int> arr = {};
    int ans = peakIndexIArr(arr);

    cout<<ans;

}