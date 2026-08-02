#include<iostream>
#include<vector>
using namespace std;

vector <int> reverseArray(vector<int> arr){
   vector<int> revArr = arr;
    int n = arr.size();
   for(int i=0;i<n/2;i++){
         swap(revArr[i],revArr[n-i-1]);
     }
     return revArr;
   }


int main(){
vector<int> arr = {1,2,3,4,5};
vector<int> reversed = reverseArray(arr);
for(int i=0;i<reversed.size();i++){
    cout<<reversed[i]<<" ";
}
}