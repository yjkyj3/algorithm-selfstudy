#include <iostream>

using namespace std;

int main() {
    int n, m, result;
    cin >> n >> m >> result;
    if (n == m && m == result) {
        cout << 10000 + n * 1000;
    } else if (n == m && n != result) {
        cout << 1000 + n * 100;
    } else if (m == result && m != n) {
        cout << 1000 + m * 100;
    } else if (n == result && n != m) {
        cout << 1000 + result * 100;
    } else {
        if (n > m && n > result) {
            cout << 100 * n;
        } else if (m > n && m > result) {
            cout << 100 * m;
        } else
            cout << 100 * result;
    }
    return 0;
}