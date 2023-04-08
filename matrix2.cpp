#include <iostream>
using namespace std;

int main(){

   int A [3][3] = {5, 7, 0, 4, 3, 1, 9, 1, 4}; 
   int B [3][1] = {7, 2, 4};
   int C [3][3]; 
   int D [3][1]; 
   float A_inv[3][3];
   
   // Finding the inverse of matrix A
   float determinant = 0;
   for (int i = 0; i < 3; i++) {
       determinant = determinant + (A[0][i] * (A[1][(i+1)%3] * A[2][(i+2)%3] - A[1][(i+2)%3] * A[2][(i+1)%3]));
   }
   for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 3; j++) {
           A_inv[i][j] = ((A[(j+1)%3][(i+1)%3] * A[(j+2)%3][(i+2)%3]) - (A[(j+1)%3][(i+2)%3] * A[(j+2)%3][(i+1)%3])) / determinant;
       }
   }
   
   //Matricalardyn bastapqy turi
    cout << "\nBastapqy turi: " << endl;
    cout << "\nA: " << endl << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "B: " << endl << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 1; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }




    // A + B = C
   
   for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 3; j++) {
           C[i][j] = A[i][j] + B[i][0]; 
       }
   }
    // Natizheni shygaru
    cout << endl << "A + B = C" << endl << endl;
    for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 3; j++) {
           cout << C[i][j] << " ";
       }
       cout << endl;
   }


    

   // A * B = D
   
   for (int i = 0; i < 3; i++) {
       int sum = 0;
       for (int j = 0; j < 3; j++) {
           sum += A[i][j] * B[j][0]; 
       }
       D[i][0] = sum;
   }
    cout << endl << "A * B = D" << endl << endl;
    // Natizheni shygaru
   for (int i = 0; i < 3; i++) {
       cout << D[i][0] << endl;
   }

   cout << endl;
    return 0;
}