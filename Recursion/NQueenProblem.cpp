#include<iostream>
#include<vector>
using namespace std;

void printSolution(vector<vector<char>>&board ,int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
bool isSafe(vector<vector<char>>& board, int i, int j, int n){
    // Check left row
    for(int col = j; col >= 0; col--)
        if(board[i][col] == 'Q') return false;

    // Check upper-left diagonal
    for(int row = i, col = j; row >= 0 && col >= 0; row--, col--)
        if(board[row][col] == 'Q') return false;

    // Check lower-left diagonal
    for(int row = i, col = j; row < n && col >= 0; row++, col--)
        if(board[row][col] == 'Q') return false;
 // Queen kahi nhi mili to return true
    return true;
}


void solve (vector<vector<char>>&board,int col,int n){
    //Base case 
    if(col>=n){
        printSolution(board,n);
        return;
    }

    //1 case Recurssion solve

    for (int row=0;row<n;row++){
        if(isSafe(board,row,col,n)){
             board [row][col]= 'Q' ;
            //Recusion solve kregaa
         solve (board, col+1, n);
         board [row][col]= '_' ;// backtrack       
        }    
    }
}


int main (){

    int n =4;
    vector<vector<char>>board(n,vector<char>(n,'_'));
    int col =0;
    solve(board,col,n);
    
    return 0;
    
    
}
