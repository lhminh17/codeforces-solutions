#include <bits/stdc++.h>
#define f0(i,n) for(int i=0; i<n; i++)
#define f1(i,n) for(int i=0; i<n-1; i++)
#define f(i,n) for(int i=0; i<n; i++) cin >> v[i] 
#define fi first
#define se second
#define ll long long 
const int  maxn  = 200005;

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ll n;cin >>n;
	
	if(n % 2 != 0) cout << 0 << endl;
	else cout << ( (n / 2) - 1 ) / 2 << endl;
	
	return 0;	   
}








