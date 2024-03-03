// 第一個不知道為甚麼測試過了提交沒過?

// #include <iostream>
// #include <sstream>
// #include <string>
// using namespace std;

// int main() {
//     string line;
//     while (getline(cin, line)) {
//         stringstream ss(line);
//         string word;
//         int count = 0;
//         while (ss >> word) {
//             count++;
//         }
//         cout << count << endl;
//     }
//     return 0;
// }


#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
    string n;
    while(getline(cin, n)){
      int count = 0;

      for(int i = 1; i < n.length(); i++){
        if((!isalpha(n[i])) && isalpha(n[i-1])){
          count++;
       }
     }
      if(isalpha(n[n.length() - 1])){
        count++;
      }
      cout << count << "\n";
  }
}