#include<bits/stdc++.h>
using namespace std;
#define N 9
int board[N][N];

bool is_safe(int row, int col, int num){
    for(int i=0; i<N; i++){
        if(board[row][i] == num){
            return false;
        }
    }

    for(int i=0; i<N; i++){
        if(board[i][col] == num){
            return false;
        }
    }

    int r = row - (row%3);
    int c = col - (col%3);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(board[i+r][j+c] == num){
                return false;
            }
        }
    }
    return true;
}

bool is_empty_position(int &row, int &col){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(board[i][j] == 0){
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}

bool solve_sudoku(){
    int row, col;
    if(!is_empty_position(row, col)){
        return true;
    }

    for(int i=1; i<10; i++){
        if(is_safe(row, col, i)){
            board[row][col] = i;
            if(solve_sudoku()){
                // cout << row << "-" << col << "-" << i << endl;
                return true;
            }
            board[row][col] = 0;
        }
    }
    return false;

}

int main(){
    int x;
    for(int i=0; i<N; i++){
        string s; 
        cin >> s;
        for(int j=0; j<N; j++){
            board[i][j] = s[j] - '0';
        }
    }
    bool is_solved = solve_sudoku();
    if(is_solved){
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cout << board[i][j];
            }
            cout << endl;
        }
    }

}