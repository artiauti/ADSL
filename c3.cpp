/*Implement check if it is possible to transform one string to another 
Statement:given two string s1 and s2 (all letters in uppercase ).check if it is possibel to convert s1 to s2 by performing following operation
1.Make some lowercase letters uppercase 
2.delete all the lowercase letters
input:s1=daBcd s2=ABC output:yes
input: s1=argaju s2=RAJ  output:yes*/


#include <iostream>
#include <string>
#include <cctype>   // for toupper(), islower(), isupper()
using namespace std;

void checkTransform() {
    string s1, s2;
    cout << "Enter first string (s1): ";
    cin >> s1;
    cout << "Enter second string (s2): ";
    cin >> s2;

    int i = 0, j = 0;  // i for s1, j for s2

    while (i < s1.length() && j < s2.length()) {
      
        if (toupper(s1[i]) == s2[j]) {
            i++;
            j++;
        }
       
        else if (islower(s1[i])) {
            i++;
        }
        
        else {
            cout << "NO";
            return;
        }
    }

    
    while (i < s1.length()) {
        if (isupper(s1[i])) {
            cout << "NO";
            return;
        }
        i++;
    }

   
    if (j == s2.length())
        cout << "YES";
    else
        cout << "NO";
}

int main() {
    checkTransform(); // no arguments
    return 0;
}
