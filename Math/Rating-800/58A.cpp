#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; cin >> s;
	vector<char> v = {'h','e','l','l','o'};
	int x = 0;
	
	for(int i=0; i<s.size(); i++){
		if(s[i] == v[x]) x++;
		if(x == 5){	
			cout <<"YES" <<endl;
			return 0;
		}
	}
	cout <<"NO" << endl;
	
	return 0;
}



