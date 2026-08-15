#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// in this we start from the index 1 not from 0 and if arr[i] is sorted as per the que 
// then ok else we put that arr[i] before any position of i where it fits best and the shift elements like i-1 to position i
//the drawback with insertionSort is this that it takes O(n^2) time complexity

// swap based insertionSort

// vector<int> insertionSort(vector<int>&arr)
// {
//     int n= arr.size();

//     for(int i=1 ; i<=n-1 ; i++)
//     {   
//         if(arr[i] < arr[i-1])
//         {
//              for(int j=i ; j>0 ; j--){

//               if(arr[j] < arr[j-1])
//               {
//                 swap(arr[j] , arr[j-1]);
              

//             }
//         }
//         }
       
//     }
//     return arr;
// }

//actual insertionSort
vector<int> insertionSort(vector<int>&arr)
{   int n = arr.size();

    for(int i=1 ; i<n ;i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key ;
    }

    return arr;
}

int main()
{
    vector<int> arr = {44,33,55,22,11 ,10 ,2, 5 ,1};

    cout<<"before sorting : "<<endl;

     for(int i=0 ; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    insertionSort(arr);

    cout<<"\nafter sorting : "<<endl;

    for(int i=0 ; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
