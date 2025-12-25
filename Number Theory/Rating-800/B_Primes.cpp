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

bool v[10000001];



int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
    int n; cin >> n;

    for(int i = 2; i*i <= n; i++){
        if(v[i] == false){
            for(int j = i*i; j <= n; j += i) v[j] = true;
        }
    }
	
    for(int i = 2; i<=n; i++){
        if(v[i] == false){
            int x = n - i;
            if(v[x] == false && x >= 2){
                cout << i << " " << x << endl;
                return 0;
            }
        }
    }

    cout << -1;

	return 0;	   
}