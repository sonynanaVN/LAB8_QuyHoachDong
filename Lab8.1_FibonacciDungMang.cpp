//Tính số fibonacci dùng mảng
#include <iostream>
using namespace std;
int fib[100];
int fibo(int n) {
    if (fib[n] != -1) {
        return fib[n];
    }
    if (n <= 1) {
        fib[n] = n;
    } else {
        fib[n] = fibo(n - 1) + fibo(n - 2);
    }
    return fib[n];
}
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < 100; i++) {
        fib[i] = -1;
    }
    cout<<fibo(n);
    return 0;
}

