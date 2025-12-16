#include <iostream>
//#include <vector>
#include <string>
//#include <algorithm>
//#include <cmath>
//#include <unordered_map>
using namespace std;
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int x = 0;
		int y = 0;
		for(char c : s){
			if(c == 'A') x++;
			else y++;		
		}		
		
		if(x > y) cout << "A" << endl;
		else cout << "B" << endl;
 	}
	
	return 0;		
}
