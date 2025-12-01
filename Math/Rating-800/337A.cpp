#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	long long n,m; cin >>n >> m;
	vector<int> v(m);
	
	for(int i=0; i<m; i++){
		cin >> v[i];
	}
	
	sort(v.begin(), v.end());
	
	long long x = v[n - 1] - v[0];
	
	for(int i=0; i<m-n+1; i++){
		if( v[i + n - 1] - v[i] < x) x = v[i + n - 1]  - v[i]; 
	}
	cout << x << endl;
	
	return 0;
}



