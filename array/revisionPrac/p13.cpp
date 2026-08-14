#include<iostream>
#include<vector>
#include<utility>

using namespace std;

vector<int> sortZeroes_Ones(vector<int> &arr)
{   
    int n = arr.size();
    int left = 0;
    int right = n-1;

    while(left <= right){
        if( left == right){
         return arr;
        }

        if(arr[left] == 0){
            left++;
        }
        if(arr[right] == 1){
            right--;
        }
        else{
            swap(arr[left] , arr[right]);
            left++;
            right--;
        }
    }
    return arr;
}

int main(){

    vector<int> arr = {0,1,0,1,1,0,1,0,0,1};

    vector<int> vec = sortZeroes_Ones(arr);
    for(int i=0 ; i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

}