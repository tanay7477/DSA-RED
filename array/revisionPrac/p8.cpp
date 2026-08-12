#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> print(vector<vector<int>> vec ){

    for(int j=0;j<vec.size();j++){
        for(int i=0 ; i<vec[0].size();i++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return vec;
}


int main(){

    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[0].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    print(vec);


}