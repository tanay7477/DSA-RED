#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//!problem : you have a unsorted array you task is to find key element and return the index of key element
//!the index must be original index.

// bool mycomp(vector<int>&a , vector<int>&b){ i done this mistake here 
//     return a[0]<b[0];
// }

bool mycomp(pair<int ,int>&a , pair<int,int>&b){ 
    return a.first<b.first;
}

int binarySearch( vector<int>&arr , int key )
{

    int n= arr.size();

    vector<pair<int , int>> vec;
    
    for(int i=0 ; i<n ; i++){
        
        vec.push_back({arr[i] , i});
    }

   sort(vec.begin(),vec.end() , mycomp);

 
 int s ,e;
 s=0 , e= n-1;

for(int i =0 ; i<n; i++){

    int mid = s+ (e-s)/2;

    if(vec[mid].first == key)
    {
        return vec[mid].second;
    }
    if( vec[mid].first > key )
    {
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
    vector<int> arr ={2,4,16,8,1,5}; //iss aray main jo index hai key ka whi return krna hai 
    int key = 5;

  int keyIndex =  binarySearch(arr , key);

  cout<<"Index of Key value : "<<keyIndex;


}