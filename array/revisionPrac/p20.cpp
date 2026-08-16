#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int binarySearch(vector<int>&arr , int key){

 sort(arr.begin(),arr.end());

 int n= arr.size();
 int s ,e;
 s=0 , e= n-1;

for(int i =0 ; i<n;i++){

    int mid = s+ (e-s)/2;

    if(arr[mid] == key)
    {
        return mid;
    }
    if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
return -1;

}

int main()
{
    vector<int> arr ={2,4,16,8,1,5};
    int key = 16;

  int keyIndex =  binarySearch(arr , key);

  cout<<"Index of Key value : "<<keyIndex;


}