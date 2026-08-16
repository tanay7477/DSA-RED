#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//custom comparator
bool mycomp(vector<int>&a , vector<int>&b){
   return a[1] < b[1];
}

int main()
{   
    vector<vector<int>> arr;
    int n;
    cout<<"enter n:";
    cin>> n;
    
    
    
    for(int i =0 ; i<n ; i++){
        vector<int>temp ;
        int a , b;
        cout<<"enter a:";
        cin>>a;
        cout<<"enter b:";
        cin>>b;

        temp.push_back(a);
        temp.push_back(b);

        arr.push_back(temp);
    }



    sort(arr.begin() , arr.end() , mycomp); //by default it sorts in ascending order

    for(int i=0 ; i<n ; i++){
            vector<int>temp = arr[i];
            int a= temp[0];
            int b = temp[1];
            
            cout<<"{"<<a<<","<<b<<"}"<<" ";
    }

};