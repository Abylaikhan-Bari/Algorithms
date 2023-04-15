#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Initialize the coefficients of the system of equations
    double a[3][3] = {{1, -1, 1}, {2, -1, 1}, {3, -2, 1}};
    // Initialize the constants of the system of equations
    double b[3] = {8, 16, 24};
    // Initialize the solution vector
    double x[3] = {0};

    // Solve the system of equations using Gauss-Jordan elimination
    for (int k = 0; k < 3; k++) {
        // Pivot selection
        double max_val = abs(a[k][k]);
        int max_row = k;
        for (int i = k + 1; i < 3; i++) {
            if (abs(a[i][k]) > max_val) {
                max_val = abs(a[i][k]);
                max_row = i;
            }
        }

        // Swap rows to put the pivot element on the diagonal
        if (max_row != k) {
            swap(a[k], a[max_row]);
            swap(b[k], b[max_row]);
        }

        // Elimination
        for (int i = k + 1; i < 3; i++) {
            double factor = a[i][k] / a[k][k];
            for (int j = k; j < 3; j++) {
                a[i][j] -= factor * a[k][j];
            }
            b[i] -= factor * b[k];
        }
    }

    // Back-substitution to obtain the solution vector
    for (int i = 2; i >= 0; i--) {
        double sum = 0;
        for (int j = i + 1; j < 3; j++) {
            sum += a[i][j] * x[j];
        }
        x[i] = (b[i] - sum) / a[i][i];
    }

    // Print the solution vector
    cout << "\nThe solution to the system of linear equations is: " << endl;
    cout << "x = " << x[0] << endl;
    cout << "y = " << x[1] << endl;
    cout << "z = " << x[2] << endl << endl;

    return 0;
}
