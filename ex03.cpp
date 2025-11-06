/*
✅ Napisz funkcję void min_max(int* arr, int size n, int* min, int* max) +
✅ Funkcja ma znaleźć wartość minimalną i maksymalną w tablicy +
✅ Wyniki zapisz przez wskaźniki min i max +
✅ Przetestuj na kilku przykładowych tablicach
✅ Wypisz znalezione wartości w main()
*/
#include <iostream>
using namespace std;

void min_max(int* arr, int n, int* min, int* max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}
int main(){
    int tab[]={3,5,7,8,12};
    int min;
    int max;
    min_max(tab, 5, &min, &max);
    cout<<min<<endl;
    cout<< max<<endl;
    return 0;
}
