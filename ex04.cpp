/*
✅ Napisz funkcję int my_strlen(const char* s)
✅ Funkcja ma zwrócić długość napisu (bez '\0')
✅ Iteruj wskaźnikiem do znaku '\0'
✅ Policz liczbę znaków
✅ Przetestuj na różnych napisach
*/
#include<iostream>
using namespace std;
int my_strlen(const char* s) {
    int l = 0;
    while (*s != '\0') {
        l++;
        s++;
    }
    return l;
}
int main() {
    string s1 = "szubidubidu";
    string s2 = "jabadabadu";
    string s3 = "srututut";
    string s4 = "erhreh";
    cout << my_strlen(s1.c_str()) << endl;
    cout << my_strlen(s2.c_str()) << endl;
    cout << my_strlen(s3.c_str()) << endl;
    cout << my_strlen(s4.c_str()) << endl;
    return 0;
}