#include <iostream>
using namespace std;

int sum_array(int* a, int size) {
    int suma = 0;
    int* ptr = a;
    for (int i = 0; i < size; i++) {
        suma += *ptr;
        ptr++;
    }
    return suma;
}

int main() {
    int t1[] = {1, 2, 3, 4, 5};
    int t2[] = {10, -5, 7};
    int t3[] = {0, 0, 0};
    int t4[] = {100};

    cout << sum_array(t1, 5) << endl;
    cout << sum_array(t2, 3) << endl;
    cout << sum_array(t3, 3) << endl;
    cout << sum_array(t4, 1) << endl;

    return 0;
}