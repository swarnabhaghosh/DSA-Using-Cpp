#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> LinearS(int M[10][10], int row, int col, int target)
{
    vector<int> res;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (M[i][j] == target)
            {
                res.push_back(i);
                res.push_back(j);
            }
        }
    }
    return res;
}
int main()
{
    int num[10][10] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3, col = 3;
    int target = 4;
    vector<int> numbers = LinearS(num, row, col, target);
    for (int i = 0; i < numbers.size(); i++)
        {
            cout << numbers[i] << " ";
        }
        cout << endl;
}
