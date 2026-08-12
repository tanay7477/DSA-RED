#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transposeOfMatrix(vector<vector<int>> &vec)
{

    int rowSize = vec.size();
    int colSize = vec[0].size();

    vector<vector<int>> transposedArr = vec;

    int rowSizeOfTransposed = colSize;
    int colSizeOfTransposed = rowSize;

    for (int i = 0; i < rowSizeOfTransposed; i++)
    {
        for (int j = 0; j < colSizeOfTransposed; j++)
        {
            transposedArr[j][i] = vec[i][j];
        }
    }
    return transposedArr;
}

int main()
{

    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[0].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> transposedArray = transposeOfMatrix(vec);

    cout << "transposed array : " << endl;

    for (int i = 0; i < transposedArray.size(); i++)
    {
        for (int j = 0; j < transposedArray[0].size(); j++)
        {
            cout << transposedArray[i][j] << " ";
        }
        cout << endl;
    }
}