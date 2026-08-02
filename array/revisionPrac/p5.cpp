#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxElem( vector <int> arr ){
    int maxVal =INT_MIN;
    for(int i=0; i<arr.size();i++){
        if(arr[i]>maxVal){
            maxVal =arr[i];
        }
    }
    return maxVal;
}

int main(){

vector <int> arr = {1,2,3,-45,56,-65,7,-81};

int result = maxElem(arr);
cout<<"The maximum element in the array is : "<<result<<endl;

}