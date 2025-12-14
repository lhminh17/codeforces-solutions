#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <cmath>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		long long k; cin >>k;
		long long x = 0;
		long long y = 0;
		
		while(x < k){
			y++;
			if(y % 3 != 0 && y % 10 != 3) x++;
		}
		
		cout << y << endl;
	}
	return 0;	
}
