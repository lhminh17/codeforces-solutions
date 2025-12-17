#include <bits/stdc++.h>
#define f0(i,n) for(int i=0; i<n; i++)
#define f1(i,n) for(int i=1; i<=n; i++)
const int  max  = 200005;

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		vector<int> a(n);
		map<int, int> m;
		
		f0(i,n) cin >> a[i];
		
		f0(i,n) m[a[i]]++;
		
		bool b = false;
		
		f0(i,n){
			long long x = a[i] + k;
			if(m.count(x)){
				b = true;
				break;
			}
		}
		
		if(b) cout << "YES" << endl;
		else cout <<"NO" << endl;	
	}
	return 0;
}








