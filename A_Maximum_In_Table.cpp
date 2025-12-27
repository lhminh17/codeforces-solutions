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

	int v[11][11];

	for(int i=0; i<=n; i++) v[i][0] = 1;

	for(int j=0; j<=n; j++) v[0][j] = 1;

	for(int i=1; i<n; i++){
		for(int j=1; j<n; j++){
			v[i][j] = v[i-1][j] + v[i][j-1];

		}
	}

	cout << v[n-1][n-1] << endl;

	return 0;	   
}
