#include <bits/stdc++.h>
#define f0(i,n) for(int i=0; i<n; i++)
#define f1(i,n) for(int i=0; i<n-1; i++)
#define f(i,n) for(int i=0; i<n; i++) cin >> v[i] 
#define ff(i,m) for(int i=0; i<m; i++) cin >> u[i]
#define fi first
#define se second
#define ll long long 
const int  maxn  = 200005;

using namespace std;

vector<int> v[1001];
bool b = true;

void solve(int u){
	if(v[u].empty()) return;

	int c = 0;
	for(int i=0; i<v[u].size(); i++){
		int x = v[u][i];
		if(v[x].empty()) c++;

		solve(v[u][i]);
	}

	if(c < 3)  b = false;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n; cin >> n;
	
	for(int i=2;  i <= n; i++){
		int x; cin >> x;
		v[x].push_back(i);
	}
	
    solve(1);

	if(b) cout << "YES" << endl;
	else cout <<"NO" << endl;
	
	return 0;	   
}
