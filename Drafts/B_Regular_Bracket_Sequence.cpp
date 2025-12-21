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
	
    string s; cin >> s;
    vector<char> v;
    stack<int> f;

    int r = 0;
    for ( char c:s ){
        if( c == '(' ) f.push(c);
        else{
            if(!f.empty()){
                f.pop();
                r++;
            }
        }
    }
	
    cout << 2*r << endl;

	return 0;	   
}