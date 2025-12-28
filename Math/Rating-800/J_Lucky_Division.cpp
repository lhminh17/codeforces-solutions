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

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	vector<int> v = {4,7,44,77,444,777,447,474,774,747,47,74,477,774};
	
	ll n; cin >>n;
	
	bool b = false;
	for(int i=0; i<v.size(); i++) if(n % v[i] == 0){
		b = true;
		break;
	}
	
	if(b) cout <<"YES" << endl;
	else cout <<"NO" << endl;
	
	return 0;	   
}

