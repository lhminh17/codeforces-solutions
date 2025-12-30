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
	
	 int t; cin >> t;
	 while(t--){
	 	string s; cin >> s;

	 	if(s.size() < 3) cout << "NO" << "\n";
	 	else{
	 		bool b = false;
	 		for(int i=1; i<s.size() - 1;i++){
	 			if(s[i-1] == '1' && s[i] == '0' && s[i+1] == '1'){
	 				b = true;
	 				break;
	 			}
	 			if(s[i-1] == '0' && s[i] == '1' && s[i+1] == '0'){
	 				b = true;
	 				break;
	 			}
	 		}

	 		if(b) cout << "Good" << "\n";
	 		else cout <<"Bad" << "\n";
	 	}

	 }

	return 0;	   
}