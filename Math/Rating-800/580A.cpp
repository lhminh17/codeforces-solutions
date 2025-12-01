#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	long long n; cin >>n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	
	long long x = 1;
	long long m = 1;
	
	for(int i=0; i<n-1; i++){
		if(v[i] > v[i + 1]){
			x = 1;
		}
		else x++;	
		m = max(x,m);
	}
	cout << m << endl;
	return 0;
}



