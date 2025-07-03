#include <iostream>
#include <vector>   
using namespace std;

void solveMaze(int maze[][4],int row ,int col,int srx,int sry, vector<vector<bool>>&visited, string output, vector<string>&path) {
    // Base case
    if (srx == row - 1 && sry == col - 1) {
        path.push_back(output);
        return;
    }


    // Down
    if (srx + 1 < row && maze[srx + 1][sry] == 1 && !visited[srx + 1][sry]) {
        visited[srx + 1][sry] = true;
        solveMaze(maze, row, col, srx + 1, sry, visited, output + 'D', path);
        visited[srx + 1][sry] = false; // Backtrack
    }

    // Left
    if (sry - 1 >= 0 && maze[srx][sry - 1] == 1 && !visited[srx][sry - 1]) {
        visited[srx][sry - 1] = true;
        solveMaze(maze, row, col, srx, sry - 1, visited, output + 'L', path);
        visited[srx][sry - 1] = false; // Backtrack
    }

    // Right
    if (sry + 1 < col && maze[srx][sry + 1] == 1 && !visited[srx][sry + 1]) {
        visited[srx][sry + 1] = true;
        solveMaze(maze, row, col, srx, sry + 1, visited, output + 'R', path);
        visited[srx][sry + 1] = false; // Backtrack
    }

    // Up
    if (srx - 1 >= 0 && maze[srx - 1][sry] == 1 && !visited[srx - 1][sry]) {
        visited[srx - 1][sry] = true;
        solveMaze(maze, row, col, srx - 1, sry, visited, output + 'U', path);
        visited[srx - 1][sry] = false; // Backtrack
    }
}



int main(){
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {0, 1, 1, 1}
    };
    if (maze[0][0] == 0 || maze[3][3] == 0) {
        cout << "No path exists" << endl;
        return 0;
    }
    int row =4;
    int col=4;

    vector<vector<bool>>visited(row, vector<bool>(col, 0));
    visited[0][0] = 1;
    vector<string>path; 
    string output = "";

    int scx=0;
    int scy=0;
    solveMaze(maze,row ,col, scx, scy, visited, output, path);  
    if (path.size() == 0) {
        cout << "No path exists" << endl;
    } else {
        cout << "Paths are: " << endl;
        for (const auto& p : path) {
            cout << p << endl;
        }
    }

}
