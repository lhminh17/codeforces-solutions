#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <cmath>
using namespace std;
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	
	if(v.size() < 2) cout <<"NO" << endl;
	else{
		sort(v.begin() ,v.end());
		for(int i = 1; i < n; i++) {
	    	if (v[i] > v[0]) {
	        	cout << v[i] << endl; 
	        	return 0; 
	    	}
		}
		
		cout <<"NO" << endl;
	}
	return 0;	
}
