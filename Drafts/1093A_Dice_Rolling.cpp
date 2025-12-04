#include <iostream>
//#include <vector>
//#include <algorithm>
using namespace std;
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		long long x; cin >> x;
		if(x <= 7) cout << 1 << endl;
		else{
			cout << (x/7) + 1 << endl;
		}
	}
	
	
	
	
	return 0;
}
	


