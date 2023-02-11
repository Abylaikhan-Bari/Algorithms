#include <iostream>
using namespace std;

#define N 3

int main(){
    char a[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> a[i][j];
        }
    }

    char g = '.';    

    for (int i = 0; i <N; i++){
        if((a[i][0] == a[i][1]) && (a[i][0] == a[i][2])){
            g = a[i][0];}
        if((a[0][i] == a[1][i]) && (a[0][i] == a[2][i])){
            g = a[0][i];
        }
    }
    if((a[0][0] == a[1][1]) && (a[0][0] == a[2][2])){
         g = a[1][1];}
    if((a[0][2] == a[1][1]) && (a[0][2] == a[2][0])){
        g = a[1][1];
    }
    if(g == ','){
        cout << "Ten tusti";
    }
    if(g == 'X'){
        cout << "Jendi";
    }
    if(g == '0'){
        cout << "Jenildi";
    }

    return 0;
}