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
	
	int n; cin >>n;

	int m = 1e9; // số siêu nhỏ 

	for(int i=0; i<n; i++){
		int x; cin >>x;
		if(x < 0) x = abs(x);

		m = min(x,m); 
	}
	

	cout << m << endl;

	return 0;	   
}
