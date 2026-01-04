#include <bits/stdc++.h>
#define f0(i,n) for(int i=0; i<n; i++)
#define ff(i,n) for(int i=1; i<=n; i++)
#define fi first
#define se second
const int  m  = 200005;

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >>t;
	while(t--){
		int n,j,k; cin >> n >> j >> k;
		
		int v[n];

		for(int i=0; i<n; i++){
			int x; cin >>x;
			v[i] = x;
		}
		
		
		if(k == 1){
			int r = v[0];
			for(int i=1; i<n; i++){
				if(v[i] > r) r = v[i];
			}
			
			cout << ( r == v[j-1] ? "YES" : "NO");
			cout << "\n";
		}
		else cout << "YES" << "\n";
	}
	return 0;
}		







