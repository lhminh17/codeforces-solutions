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

    ll a,b;

	for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            
            ll x; cin >>x;
            
            if(x == 1){
                a = i;
                b = j;
            } 
        }
    }

    cout << abs(2 - a) + abs(2 - b);

	return 0;	   
}