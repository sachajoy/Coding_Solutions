#include <iostream>
using namespace std;
bool can_placed(int **a, int row, int col, int n)
{
    // cout << "cell to check " << row << "-" << col << endl;
    for (int i = 0; i < n; i++)
    {
        if (i != row && a[i][col] == 1)
        {
            // cout << "col check - " << row << "-" << i << endl;
            return false;
        }
    }
    
    // cout << "1. dia check f - " << row << "-" << col << endl;
    for (int i = row - 1, j = col - 1; i >= 0 && j >=0 ; i--, j--)
    {
        // cout << "1. dia check  - " << i << "-" << j << endl;
        if(a[i][j] == 1)
            return false;
    }
    // cout << "2. dia check f - " << row << "-" << col << endl;

    for (int i = row - 1, j= col + 1; i >= 0 &&  j<n; i--, j++)
    {
        // cout << "2. dia check  - " << i << "-" << j << endl;
        if(a[i][j] == 1)
            return false;
    }

    
    return true;
}

void print_solution(int **a, int row, int n)
{
    // cout << "row-" << row << endl;
    if (row == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
        return;
    }

    for (int j = 0; j < n; j++)
    {
        bool temp = can_placed(a, row, j, n);
        // cout << "A - " << temp << "-" << row << endl;
        if (temp)
        {
            a[row][j] = 1;
            print_solution(a, row + 1, n);
            a[row][j] = 0;
        }
    }
}

void placeNQueens(int n)
{
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }
    print_solution(a, 0, n);
}
int main()
{

    int n;
    cin >> n;
    placeNQueens(n);
}
