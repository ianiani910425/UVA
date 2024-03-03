// bitset  
// to_string
// find
// substr
#include<bitset>
#include<iostream>
using namespace std;
int main(){
	int t;
	while(cin >> t && t!=0){
		string binary = bitset<32>(t).to_string();
		int first = binary.find("1");
		
		int count = 0;
		for(int i=first ; i<binary.length() ; i++){
			if(binary[i] == '1'){
				count++;
			}
		}
		
		if (count % 2 == 0) {
            cout << "The parity of " << binary.substr(first) << " is " << count << " (mod 2)." << endl;
        } else {
            cout << "The parity of " << binary.substr(first) << " is " << count << " (mod 2)." << endl;
        }
    }
}