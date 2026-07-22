#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> arr)
{
    int rowsInOrigArr = arr.size();
    int colsInOrigArr = arr[0].size();

    int rowsInTransposedArr = arr[0].size();
    int colsInTransposedArr = arr.size();

    vector<vector<int>> transposedMatrix(rowsInTransposedArr, vector<int>(colsInTransposedArr, 0));

    for (int i = 0; i < rowsInOrigArr; i++)
    {
        for (int j = 0; j < colsInOrigArr; j++)
        {
            transposedMatrix[j][i] = arr[i][j];
        }
    }
     cout << " inside after transpose -";
    cout << endl;

    for (int i = 0; i <transposedMatrix.size(); i++)
    {
        for (int j = 0; j < transposedMatrix[i].size(); j++)
        {
            cout << transposedMatrix[i][j] <<" ";
        }
        cout << endl;
    }
     cout<<"\n"<<"swapping..."<<endl;
    int count =0 ; int a =0;
   
for(int i=0;i<transposedMatrix.size();i++){

    int left = 0;
    int right = transposedMatrix.size()-1;

    while(left < right){

        swap(transposedMatrix[i][left],
             transposedMatrix[i][right]);

        left++;
        right--;
    }
}

    cout<<"\n"<<"swapped"<<endl;
     for (int i = 0; i < transposedMatrix.size(); i++)
    {
        for (int j = 0; j < transposedMatrix[i].size(); j++)
        {
            cout << transposedMatrix[i][j] <<" ";
        }
        cout << endl;
    }

    return transposedMatrix;
}

int main()
{

    vector<vector<int>> vec = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
        };
    cout << "before transpose -" << endl;
    ;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    vector<vector<int>> vecc(3, vector<int>(4, 1));

    vecc = transpose(vec);

}