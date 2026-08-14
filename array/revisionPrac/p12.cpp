#include <iostream>
#include <vector>

using namespace std;

void spiralMatrix(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int startingRow = 0;
    int endingRow = n - 1;

    int startingCol = 0;
    int endingCol = m - 1;

    while (startingRow <= endingRow && startingCol <= endingCol)
    {
        // Top row
        for (int j = startingCol; j <= endingCol; j++)
        {
            cout << matrix[startingRow][j] << " ";
        }
        startingRow++;

        // Right column
        for (int i = startingRow; i <= endingRow; i++)
        {
            cout << matrix[i][endingCol] << " ";
        }
        endingCol--;

        // Bottom row
        if (startingRow <= endingRow)
        {
            for (int j = endingCol; j >= startingCol; j--)
            {
                cout << matrix[endingRow][j] << " ";
            }
            endingRow--;
        }

        // Left column
        if (startingCol <= endingCol)
        {
            for (int i = endingRow; i >= startingRow; i--)
            {
                cout << matrix[i][startingCol] << " ";
            }
            startingCol++;
        }
    }
}

int main()
{
    vector<vector<int>> arr = {
        {10, 20, 30, 40, 50, 60},
        {70, 80, 90, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {11, 22, 33, 44, 55, 66}
    };

    cout << "Starting matrix:" << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "\nSpiral traversal:" << endl;

    spiralMatrix(arr);
}