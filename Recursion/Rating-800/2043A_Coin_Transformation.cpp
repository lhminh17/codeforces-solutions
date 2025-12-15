#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <cmath>
//#include <unordered_map>
using namespace std;
	
long long solve(long long n){
	if(n < 4) return 1;
	return 2*solve(n/4);
} 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		cout << solve(n) << endl;
 	}
	
	return 0;		
}
