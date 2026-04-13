#include <bits/stdc++.h>
using namespace std;
class Matrix{
    private:
        int row;
        int col;
        vector<vector<int>>mat;
    public:
        Matrix(int r,int c):row{r},col{c}{
            mat.assign(row,vector<int>(col,0));
        }
        void fill(){
            cout << "fill the matrix row wise\n";
            for (int i=0;i<row;i++){
                cout << "fil for row " << i+1 <<" : ";
                for (int j=0;j<col;j++){
                    cin >> mat[i][j];
                }
            }
        }
        void show(){
            for (int i=0;i<row;i++){
                for (int j=0;j<col;j++){
                    cout<<mat[i][j] << " ";
                }
                cout << "\n";
            }
        }
        friend Matrix operator*(Matrix &m1,Matrix &m2);
};
Matrix operator*(Matrix &m1,Matrix &m2){
    if (m1.col!=m2.row){std::cout << "not possible \n";exit(0);}
    Matrix result(m1.row,m2.col);
        for (int i=0;i<m1.row;i++){
            for (int j=0;j<m2.col;j++){
                for (int k=0;k<m1.col;k++){
                    result.mat[i][j]+=m1.mat[i][k]*m2.mat[k][j];
                }
            }
        }
    return result;
}
int main (){
        int r1, c1, r2, c2;
    cout << "Enter rows and cols of matrix 1: ";
    cin >> r1 >> c1;
    cout << "Enter rows and cols of matrix 2: ";
    cin >> r2 >> c2;
    Matrix m1(r1, c1), m2(r2, c2);
    m1.fill();
    m2.fill();
    Matrix m3 = m1 * m2;
    cout << "\nResultant Matrix:\n";
    m3.show();
    return 0;
}
