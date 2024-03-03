// 題目規定使用 long long int

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    long long int arm1,arm2;
    while(cin >> arm1 >> arm2){
        cout<< abs(arm1 - arm2) << endl;
    }
}