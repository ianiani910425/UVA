// 計算1到n的平方和

#include <iostream>
using namespace std;
int main() {
    int n;
    while (cin >> n && n != 0) {
        int sum = n * (n + 1) * (2 * n + 1) / 6; //這是公式
        cout << sum << endl;
    }
    return 0;
}