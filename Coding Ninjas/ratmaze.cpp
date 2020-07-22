#include<iostream>
using namespace std;
bool if_possible(int m[][20], int ** a, int r, int c, int n){
    // cout << "if " << r << "-" << c << endl;
    if(r > n-1 || c > n-1 || r < 0 || c < 0){
        return false;
    }else{
        if(a[r][c] == 0 && m[r][c] == 1){
            cout << "ans at " << r << "-" << c << "-" << a[r][c] << endl;
            return true;
        }
        return false;
    }
}
void print_path(int m[][20], int **ans, int r, int c, int n){
    if(r == n-1 && c == n-1){
        ans[n-1][n-1] = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << ans[i][j] << " ";
            }
        }
        ans[n-1][n-1] = 0;
        cout << endl;
        return;
    }
    if(r > n-1 || c > n-1 || r < 0 || c < 0){
        return;
    }
    ans[r][c] = 1;
    bool up = if_possible(m, ans, r-1, c, n);
    if(up){
        // cout << "u" << endl;
        print_path(m, ans, r-1, c, n);
    }
    bool down = if_possible(m, ans, r+1, c, n);
    if(down){
        // cout << "d" << endl;
        print_path(m, ans, r+1, c, n);
    }
    bool right = if_possible(m, ans, r, c+1, n);
    if(right){
        // cout << "r" << endl;
        print_path(m, ans, r, c+1, n);
    }
    bool left = if_possible(m, ans, r, c-1, n);
    if(left){
        // cout << "l" << endl;
        print_path(m, ans, r, c-1, n);
    }
	ans[r][c] = 0;
}

void ratInAMaze(int maze[][20], int n){
    int **ans = new int*[n];
    for(int i=0; i<n; i++){
        ans[i] = new int[n];
        for(int j=0; j<n; j++){
            ans[i][j] = 0;
        }
    }
    ans[0][0] = 1;
    print_path(maze, ans,0,0, n);
}

int main(){

  int n; 
  cin >> n ;
  int maze[20][20];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> maze[i][j];
        }		
  }
  ratInAMaze(maze, n);
}


