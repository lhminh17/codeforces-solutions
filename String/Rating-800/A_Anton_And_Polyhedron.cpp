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

	map<string, int> m = {{"Tetrahedron",4}, {"Cube",6}, {"Octahedron",8}, {"Dodecahedron", 12}, {"Icosahedron",20}};

	int r = 0;

	f0(i,n){
		string s; cin >>s;

		r += m[s];
	}


	cout << r;

	return 0;	  
}
