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

	int n; cin >>n;

	int v[n+1];

	f0(i,n){
		int x; cin >>x;
		v[i] = x;
	}

	bool b = true;
	f0(i,n){
		if(v[i] != v[n - i - 1]) b = false;
	}

	if(b) cout << "YES";
	else cout << "NO";


	return 0;	  
}
