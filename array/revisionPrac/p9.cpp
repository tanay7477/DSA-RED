#include<iostream>
#include<vector>
using namespace std;

void diagonalTraversal(vector<vector<int>>&matrix){
    
    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    for(int i=0 ; i<rowSize ; i++){
        for(int j=0 ; j<colSize ; j++){

             if(i==j){
                cout<<"Left to Right Diagonal : "<<matrix[i][j]<<" ";
             }

             if(j == rowSize-1-i){
                cout<<"Right to Left Diagonal : "<<matrix[i][j]<<" ";
             }
        }
    }


}
int main(){

vector<vector<int>> arr = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
};

for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[0].size();j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
}

diagonalTraversal(arr);


}