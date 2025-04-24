#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Matrix {
    vector<vector<int>> mat;
    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c), mat(r, vector<int>(c)) {}

    void input() {
        cout << "Enter matrix:\n";
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> mat[i][j];
    }

    Matrix operator+(const Matrix& m) const {
        if (rows != m.rows || cols != m.cols)
            throw invalid_argument("Incompatible for addition");
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
        return result;
    }

    Matrix operator*(const Matrix& m) const {
        if (cols != m.rows)
            throw invalid_argument("Incompatible for multiplication");
        Matrix result(rows, m.cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < m.cols; ++j)
                for (int k = 0; k < cols; ++k)
                    result.mat[i][j] += mat[i][k] * m.mat[k][j];
        return result;
    }

    Matrix transpose() const {
        Matrix result(cols, rows);
        for (int i = 0; i < cols; ++i)
            for (int j = 0; j < rows; ++j)
                result.mat[i][j] = mat[j][i];
        return result;
    }

    void display() const {
        for (auto& row : mat) {
            for (int val : row) cout << val << " ";
            cout << endl;
        }
    }
};