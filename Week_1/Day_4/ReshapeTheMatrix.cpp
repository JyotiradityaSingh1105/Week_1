#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size();
    int n = mat[0].size();
    if (m * n != r * c) {
        return mat;
    }
    vector<vector<int>> ans(r, vector<int>(c));
      int row = 0, col = 0;
      for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ans[row][col] = mat[i][j];
            col++;

            if (col == c) {
                col = 0;
                row++;
            }
        }
    }
   return ans;
}

int main() {
    vector<vector<int>> mat = {{1, 2}, {3, 4}};
    int r = 1, c = 4;
    vector<vector<int>> result = matrixReshape(mat, r, c);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}