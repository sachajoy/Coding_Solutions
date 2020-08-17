void helper(char** board, int r, int c, int i, int j, int** visited) {
    if (i >= r || j >= c || i<0 || j<0) {
        return;
    }
    if (board[i][j] == 'X' || visited[i][j] == 1) {
        return;
    }
    helper(board, r, c, i+1, j, visited);
    helper(board, r, c, i, j+1, visited);
    helper(board, r, c, i, j-1, visited);
    helper(board, r, c, i-1, j, visited);

}
int graph(char** board, int r, int c) {
    int x=0;
    int **visited = new int*[r];
    for (int i=0; i<r; i++) {
        visited[i] = new int[c];
        for (int j=0; j<c; j++) {
            visited[i][j] = 0;
        }
    }
    helper(board, r, c, 0, 0, visited);
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (visited[i][j])
                x++;
        }
    }

}