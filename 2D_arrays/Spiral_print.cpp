#include <bits/stdc++.h>
using namespace std;
void spiralPrint(int **input, int nRows, int nCols)
{
    int cs = 0, ce = nCols - 1;
    int rs = 0, re = nRows - 1;
    while (cs <= ce && rs <= re)
    {
        for (int i = cs; i <= ce; i++)
        {
            cout << input[rs][i] << " ";
        }
        rs++;
        for (int i = rs; i <= re; i++)
        {
            cout << input[i][ce] << " ";
        }
        ce--;
        for (int i = ce; i >= cs; i--)
        {
            cout << input[re][i] << " ";
        }
        re--;
        for (int i = re; i >= rs; i--)
        {
            cout << input[i][cs] << " ";
        }
        cs++;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }