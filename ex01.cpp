#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x =5;
    int* p = &x;
    x=7;
    cout<<&x;
    cout<<*p;
    *p = 8;
    cout<<x;
    return 0;
}