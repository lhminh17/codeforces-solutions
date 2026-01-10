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
	string s; cin >>s;

	int x = 0;
	int y = 0;

	for(char c:s){
		if(c == '0') x++;
		else y++;
	}

	cout << abs(x - y);
	   	
	
	return 0;	  
}
