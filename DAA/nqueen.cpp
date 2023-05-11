#include<bits/stdc++.h>
using namespace std;
void printSolution(char **board, int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe (char **board, int row, int col, int N){
    int i = row, j = col;
    while (i > -1 && j > -1){
        if (board[i][j] == 'Q')
            return false;
        i--;
        j--;
    }

    i = row;
    j = col;
    while (i > -1 && j < N){
        if (board[i][j] == 'Q')
            return false;
        i--;
        j++;
    }

    i = row;
    j = col;
    while (i > -1){
       
        if (board[i][j] == 'Q')
            return false;
        i--;
    }

    return true;
}

bool solutionExists(char **board, int N, int row){
    if (row >= N)
        return true;
    for (int col = 0; col < N; col++){

        if(isSafe(board, row, col, N)){
        
            board[row][col] = 'Q';
            
            if (solutionExists(board, N, row + 1))
                return true;
            board[row][col] = '.';
        }
    }

    return false;
}


void solveNQueenProblem(int N){

    char **board = new char*[N];
  
    for(int i = 0; i < N; i++){
        board[i] = new char[N];
 
        for (int j = 0; j < N; j++) 
            board[i][j] = '.';
    }

    if(!solutionExists(board, N, 0)){
        cout << "No solution exists for N = " << N << endl;
    } 

    else{
        cout << "One of the possible solution for N = " 
                        << N << " is - " << endl;
        printSolution(board, N);
    }
}
int main() {
    int N = 8;
    solveNQueenProblem(N);
}
