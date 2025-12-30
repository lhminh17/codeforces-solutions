#include <bits/stdc++.h>
#define f0(i,n) for(int i=0; i<n; i++)
#define f1(i,n) for(int i=1; i<n; i++)
#define f(i,n) for(int i=0; i<n; i++) cin >> v[i] 
#define ff(i,m) for(int i=0; i<m; i++) cin >> u[i]
#define fi first
#define se second
#define ll long long 
const int  maxn  = 200005;

using namespace std;

int main(){
	
	int t; cin >>t;
	while(t--){
		int v[3];
		int x,y,z; cin >> x >> y >> z;
		v[0] = x; v[1] = y; v[2] = z;

		if((v[0] + v[1] + v[2]) % 3 != 0) cout << "NO" << "\n";
		else{
			int x = (v[0] + v[1] + v[2]) / 3;

			if(v[1] > x) cout << "NO" << "\n";
			else cout <<"YES" << "\n";
		}
	}  

	return 0;	   
}