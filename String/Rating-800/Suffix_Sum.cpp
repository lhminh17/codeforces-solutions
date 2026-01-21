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

	int n,m; cin >>n >>m;

	long long r = 0;
	int count = n;
	for(int i=0; i<n; i++){
		int x; cin >>x;
		if(count == m) r += x;
		else count--;
	}

	cout << r;
	return 0;	  
}
