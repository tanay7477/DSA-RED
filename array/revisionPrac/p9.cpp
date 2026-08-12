#include <iostream>
#include <vector>
using namespace std;

void diagonalTraversal(vector<vector<int>> &matrix)
{

    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    int leftToRightDiagonalSum = 0;
    int rightToLeftDiagonalSum = 0;

    cout << "Left to Right Traversal : " << endl;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {

            if (i == j)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }

    cout << "\nRight to Left Traversal : " << endl;

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {

            if (j == rowSize - 1 - i)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }

    for (int i = 0; i < rowSize; i++)
    {

        leftToRightDiagonalSum = leftToRightDiagonalSum + matrix[i][i];
    }
    cout << "\nLeft to Right Diagonal Sum : " << leftToRightDiagonalSum << endl;

    for (int i = 0; i < rowSize; i++)
    {

        rightToLeftDiagonalSum = rightToLeftDiagonalSum + matrix[i][rowSize - i - 1];
    }
    cout << "\nRight to Left Diagonal Sum : " << rightToLeftDiagonalSum;
}

void printDiagonalSum(vector<vector<int>> &matrix)
{

    int rowSize = matrix.size();
    int colSize = matrix[0].size();

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
        }
    }
}
int main()
{

    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    diagonalTraversal(arr);
}