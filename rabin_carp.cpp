#include <iostream>
#include <string>
#include <math.h>

using namespace std;

const int p = 31; // hash funksiada qoldanylatyn jai san

// hashti esepteu funksiasy 
int hashString(const string& str, int start, int length) {
    int hashValue = 0;
    for (int i = start; i < start + length; i++) {
        hashValue = hashValue * p + (str[i] - 'a' + 1);
    }
    return hashValue;
}

// Rabin-Karp adisimen matinde engizilgen joldy izdeu funksiasy
void searchSubstrings(const string& text, const string& pattern) {
    int n = text.length();
    int m = pattern.length();
    int patternHash = hashString(pattern, 0, m);
    int textHash = hashString(text, 0, m);
    for (int i = 0; i <= n - m; i++) {
        if (textHash == patternHash) {
            bool found = true;
            for (int j = 0; j < m; j++) {
                if (text[i+j] != pattern[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                cout << "Substring found at index: " << i << endl;
            }
        }
        if (i < n - m) {
            textHash = p * (textHash - (text[i] - 'a' + 1) * pow(p, m-1)) + (text[i+m] - 'a' + 1);//Matinnin hash manin janartu
        }
    }
}

// Qoldanu
int main() {
    string text = "abcdeabcdabc";
    string pattern = "a";
    searchSubstrings(text, pattern);
    return 0;
}
