// cin 原來可以一次輸入完再下一步

#include <iostream>
using namespace std;
int main() {
    int a[4];
    int n;
    cin >> n;
    while(n){
        for(int i=0;i<4;i++){
            cin >> a[i];
            cout << a[i] << " ";
        }
        int v = a[1] - a[0];
        if(a[2]-a[0] == v*2){
            cout << a[3]+ v;
        }else{
            cout << a[3] * (a[1]/a[0]);
        }

        cout << endl;
        n--;
    }
    return 0;
}