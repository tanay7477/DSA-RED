#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr(vector<vector<int>> &vec)
{
    int n = vec.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "left->Right Diagonal: " << vec[i][i] << endl;
        sum = sum + vec[i][i];
    }
    cout << endl;
    cout << "sum of left->Right Diagonal: " << sum << endl;

    sum = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "right->Left Diagonal: " << vec[i][n - i - 1] << endl;
        sum = sum + vec[i][n - i - 1];
    }
    cout << "\n"
         << "sum of right->Left Diagonal: " << sum;

    return vec;
}

int main()
{
    vector<vector<int>> vec = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    arr(vec);
}