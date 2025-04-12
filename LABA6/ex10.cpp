#include <iostream>
#include <vector>

using namespace std;

class Matrix{
    private:
        vector<vector<int>> matrix;

    public:
        Matrix() : matrix(2, vector<int>(2)){}
        Matrix(istream& in) : matrix(2, vector<int>(2)){
            cout << "Enter 4 elements of matrix: ";
            for(int i=0; i<2; ++i){
                for(int j=0; j<2; ++j){
                    in >> matrix[i][j]; 
                }
            }
        }
        friend ostream& operator << (ostream& os, Matrix& element){
            for(int i=0; i<2; ++i){
                for(int j=0; j<2; ++j){
                    os << element.matrix[i][j] <<" ";
                }
                cout << "\n";
            }
            return os;
        }
        Matrix operator + (const Matrix& other){
            Matrix result;
            for(int i=0; i<2; ++i){
                for(int j=0; j<2; ++j){
                    result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
                }
            }
            return result;
        }
        Matrix operator * (const Matrix& other){
            Matrix result;
            result.matrix[0][0] = matrix[0][0] * other.matrix[0][0] + matrix[0][1] * other.matrix[1][0];
            result.matrix[0][1] = matrix[0][0] * other.matrix[0][1] + matrix[0][1] * other.matrix[1][1];
            result.matrix[1][0] = matrix[1][0] * other.matrix[0][0] + matrix[1][1] * other.matrix[1][0];
            result.matrix[1][1] = matrix[1][0] * other.matrix[0][1] + matrix[1][1] * other.matrix[1][1];
            return result;
        }
        int operator () (int x, int y){
            return matrix[x][y];
        }

};

int main()
{
    Matrix matrix1(cin);
    Matrix matrix2(cin);
    cout << "First matrix: \n" << matrix1 << endl;
    cout << "Second matrix: \n" << matrix2 << endl;

    Matrix matrix3 = matrix1 + matrix2;
    cout << "Matrix of amount: \n" << matrix3 << endl;
    Matrix matrix4 = matrix1 * matrix2;
    cout << "Matrix of multiplay: \n" << matrix4 << endl;
    cout << "First matrix's element (0, 1): " << matrix1(0, 1) << endl;

    return 0;
}