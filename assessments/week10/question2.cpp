#include <iostream>
using namespace std;

int RowWithMaxOnes(int matrix[][100], int N) {
    int maxOnes = -1;
    int rowIndex = -1; 

    for (int i = 0; i < N; i++) {
        int count = 0; 
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] == 1) {
                count++;
            }
        }

        if (count > maxOnes) {
            maxOnes = count;
            rowIndex = i;
        }
    }

    return rowIndex; 
}

int main() {
    int matrix[4][100] = {
        {0, 0, 0, 1},
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {0, 0, 1, 1}
    };

    int N = 4;
    int rowIndex = RowWithMaxOnes(matrix, N);
    cout << "The row with the maximum number of 1s is: " << rowIndex << endl;
    return 0;
}
