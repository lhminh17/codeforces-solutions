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
	
    int t; cin >> t;

    while(t--){
        ll a,b; cin >> a >> b;

        if (a < b) swap(a,b);

        ll r = 0 ;
        while(b > 0){
            r += a / b;
            a %= b;
            if(a < b) swap(a,b);
        }

        cout << r << endl;
    }
	
    return 0;	   
}