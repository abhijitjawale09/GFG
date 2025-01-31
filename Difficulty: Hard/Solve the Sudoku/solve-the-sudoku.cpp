//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    bool isValid(vector<vector<int>> &board, int row, int col, int num) {
        // Check if num is present in the current row or column
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == num || board[i][col] == num)
                return false;
        }

        // Check if num is present in the 3x3 subgrid
        int startRow = row - row % 3, startCol = col - col % 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[startRow + i][startCol + j] == num)
                    return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<int>> &board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == 0) { // Empty cell
                    for (int num = 1; num <= 9; num++) {
                        if (isValid(board, row, col, num)) {
                            board[row][col] = num; // Place the number

                            if (solve(board)) // Recursive call
                                return true;

                            board[row][col] = 0; // Backtrack
                        }
                    }
                    return false; // No valid number found, trigger backtracking
                }
            }
        }
        return true; // Solved
    }

    // Function to find a solved Sudoku.
    void solveSudoku(vector<vector<int>> &mat) {
        solve(mat);
    }

    // Function to print Sudoku grid
    void printGrid(vector<vector<int>> &mat) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

//{ Driver Code Starts.

vector<int> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    vector<int> res;
    while (ss >> num) {
        res.push_back(num);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<vector<int>> grid;
        for (int i = 0; i < 9; i++) {
            vector<int> v = inputLine();
            grid.push_back(v);
        }

        Solution ob;

        ob.solveSudoku(grid);

        for (auto v : grid) {
            for (auto elem : v) {
                cout << elem << " ";
            }
            cout << endl;
        }

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends