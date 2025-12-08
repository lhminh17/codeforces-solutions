#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <cmath>
using namespace std;
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n,k; cin >> n >> k;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	
	long long x = 0;
	for(int i=0; i < k; i++) x+= v[i];
		
	long long y = x; 
	long long z = 1;
	
	
	for(int i=1; i <= n - k; i++){
		x = x - v[i - 1] + v[i + k - 1];
		if(x < y){
			y = x; 
			z = i + 1;
		}
	}

	cout << z << endl;

	return 0;
}
	


