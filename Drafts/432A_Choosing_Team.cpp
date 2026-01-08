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
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	   	
	int n,k; cin >>n >>k;

	int r = 0;

	for(int i=0; i<n; i++){
		int y; cin >>y;

		if(y + k <= 5) r++; 
	}

	cout << r / 3;
	
	return 0;	  
}
