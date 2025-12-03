#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		long long n,a,b,c; cin >> n >>a >> b >> c;
		long long x = a + b + c;
		
		long long y = n / x;
		long long z = n % x;
		
		if(z == 0) cout << y*3 << endl;
		else{
			if(z <= a) cout << y*3 + 1 << endl;
			else if(z > a && z <= a + b) cout << y*3 + 2 << endl;
			else cout << y*3 + 3 << endl;
		}	
	}
	
	return 0;
}



