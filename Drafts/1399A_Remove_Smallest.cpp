#include <bits/stdc++.h>
#define f0(i,n) for(int i=0; i<n; i++)
#define f1(i,n) for(int i=0; i<n-1; i++)
#define f(i,n) for(int i=0; i<n; i++) cin >> v[i] 
#define fi first
#define se second
const int  maxn  = 200005;

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		int n;cin >> n;
		vector<int> v(n);	
		f(i,n);
		
		sort(v.begin(), v.end());
		
		bool b = true;
		f1(i,n){
			if(v[i + 1] - v[i] > 1) b = false;
		}
		
		if(b) cout <<"YES" << endl;
		else cout << "NO" << endl;
	}
	
			
	
	
			
	return 0;	   
}








