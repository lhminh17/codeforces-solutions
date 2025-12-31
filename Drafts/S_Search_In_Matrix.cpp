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
	
	int n,m; cin >>n>>m;

	int v[n][m];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			int x; cin >>x;
			v[i][j] = x;
		}
	}

	int x; cin >>x;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(v[i][j] == x){
				cout << "will not take number";
				return 0;
			}
		}
	}

	cout <<"will take number";

	return 0;	  

}
