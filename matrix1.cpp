#include <iostream>
using namespace std;

int main(){

   int A [3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
   int B [3][1] = {1, 2, 3};
   int C [3][3]; 
   int D [3][1]; 

   //Matricalardyn bastapqy turi
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
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
    cout << endl << "A + B = C" << endl;
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
       C[i][0] = sum;
   }
    cout << endl << "A * B = D" << endl;
    // Natizheni shygaru
   for (int i = 0; i < 3; i++) {
       cout << D[i][0] << endl;
   }
    return 0;
}