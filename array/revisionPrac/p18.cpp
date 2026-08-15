#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> selectionSort(vector<int>&arr){
    int n = arr.size();
    for(int i=0 ;i<n-1;i++){
         int min = i;

         for(int j=i+1 ; j<n ; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
         }
         swap(arr[i],arr[min]);
    }  
    return arr;                      
}

int main()
{
vector<int> arr = {44,33,55,22,11};
for(int i=0 ; i<arr.size() ;i++){
    cout<<arr[i]<<" ";
}
selectionSort(arr);

cout<<"after sorting : "<<endl;
for(int i=0 ; i<arr.size() ;i++){
    cout<<arr[i]<<" ";
}

}