// pari<string,int> 用來存儲網站名稱和相關度
//make_pair(name,rel) 用來將name和rel組合成一個pair

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int T;
    cin >> T;
		
    //建立存儲空間
    for(int t=1; t<=T ; t++){
        vector<pair<string,int>> sites;
		
    //讀取
        for(int i=0; i<10; i++){
            string name;
            int rel;
            cin >> name >> rel;
            sites.push_back(make_pair(name,rel));
        }
		
    //比較
        int max_value = 0;
        for(auto site : sites){
            max_value = max(max_value,site.second);
        }
		
    //列印
        cout << "Case #" << t << ":" << endl;
        for(auto site : sites){
            if(max_value == site.second){
                cout << site.first << endl;
            }
        }
    }
}
