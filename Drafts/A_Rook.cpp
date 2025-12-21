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
        string s; cin >> s;
        for(char i = 'a'; i <= 'h'; i++){
            if(i == s[0]) continue;
            cout << i<<s[1] << endl;
        }

        for(char i = '1'; i<='8'; i++){
            if(i == s[1]) continue;
            cout << s[0]<<i << endl;
        }
    }
	
   

	return 0;	   
}