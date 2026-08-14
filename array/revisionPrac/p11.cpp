#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<vector<int>> rotate2dMatrix(vector<vector<int>> &vec)
{

    int rowSize = vec.size();
    int colSize = vec[0].size();

    int rowSizeOfTransposed = colSize;
    int colSizeOfTransposed = rowSize;

    vector<vector<int>> transposedArr(rowSizeOfTransposed, vector<int>(colSizeOfTransposed, 0));

    for (int i = 0; i < colSizeOfTransposed; i++)
    {
        for (int j = 0; j < rowSizeOfTransposed; j++)
        {
            transposedArr[j][i] = vec[i][j];
        }
    }
    cout << "transposed array : " << endl;

    for (int i = 0; i < transposedArr.size(); i++)
    {
        for (int j = 0; j < transposedArr[0].size(); j++)
        {
            cout << transposedArr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < transposedArr.size(); i++)
    {
        for (int j = 0; j < transposedArr[0].size() / 2; j++)
        {

            swap(transposedArr[i][j], transposedArr[i][transposedArr[0].size() - 1 - j]);
        }
        cout << endl;
    }
    return transposedArr;
}

int main()
{

    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {2, 0, 2}, {4, 7, 2}};
    cout << "row : " << vec.size() << endl;
    cout << "col : " << vec[0].size() << endl;

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[0].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> transposedArray = rotate2dMatrix(vec);

    cout << "rotated 90deg array : " << endl;
    cout << "row : " << transposedArray.size() << endl;
    cout << "col : " << transposedArray[0].size() << endl;

    for (int i = 0; i < transposedArray.size(); i++)
    {
        for (int j = 0; j < transposedArray[0].size(); j++)
        {
            cout << transposedArray[i][j] << " ";
        }
        cout << endl;
    }
}