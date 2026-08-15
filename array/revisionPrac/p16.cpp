#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// it swaps adjacent elements untill me get the sorted array
//the drawback with bubbleSort is this that it takes O(n^2) time complexity

vector<int> bubbleSort(vector<int>&arr)
{
    int n= arr.size();

    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n-1 ; j++){

            if(arr[j] > arr[j+1]){

            swap(arr[j] , arr[j+1]) ;

            }
        }
    }

    return arr;
}

int main()
{
    vector<int> arr = {5,4,3,2,1};

    cout<<"before sorting : "<<endl;

     for(int i=0 ; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    vector<int> vec = bubbleSort(arr);

    cout<<"after sorting : "<<endl;

    for(int i=0 ; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}
