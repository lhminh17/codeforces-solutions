#include <iostream>
//#include <vector>
//#include <string>
#include <algorithm>
#include <map>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	int t; cin >> t;
	
	map<string, int> m;
	
	while(t--){
		string s; cin >> s;
		if(m[s] == 0) cout << "OK" << endl;
		else cout << s << m[s] << endl;
		m[s]++;
	}
		
	
	return 0;		
}
