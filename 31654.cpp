#include <iostream>

using namespace std;

int main() {
    int n, m, result;
    cin >> n >> m >> result;
    if (result == (n + m)) {
        cout << "correct!";
    } else
        cout << "wrong!";
}