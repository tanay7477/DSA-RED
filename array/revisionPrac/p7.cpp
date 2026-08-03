#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateArr(vector<int> arr , int rotateByDigits){
    vector<int> rotatedArr = arr;
    int n = arr.size();
    int k = rotateByDigits % n; 

    vector<int> temp;

    for(int i=n-k;i<=n-1;i++){
       temp.push_back(arr[i]);
    }

    for(int i=n-1;i>=0;i--){
        if(i-k>=0){
            rotatedArr[i] = arr[i-k];
        }
    }

    for(int i=0;i<k;i++){
        rotatedArr[i] = temp[i];
    }
    return rotatedArr;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> rotated = rotateArr(arr, 2);
    for(int i=0;i<rotated.size();i++){
        cout<<rotated[i]<<" ";
    }

}