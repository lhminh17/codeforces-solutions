#include <iostream>
//#include <vector>
//include <string>
//#include <algorithm>
using namespace std;
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
		long long k,n,w; cin >> k >> n >>w;
		
		long long r = k*w*(w+1)/2;
		long long x = r - n;
		
		if(x < 0) cout << 0 << endl;
		else cout << x << endl;

	return 0;
}
	


