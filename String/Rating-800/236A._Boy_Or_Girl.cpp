#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <cmath>
#include <set>
using namespace std;
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; cin >> s;
	set<char> x;
	
	for(char c:s){
		x.insert(c);
	}
	
	if(x.size() % 2 == 0) cout <<"CHAT WITH HER!" << endl;
	else cout <<"IGNORE HIM!" << endl;
	
	
	return 0;	
}
