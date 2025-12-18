#include <bits/stdc++.h>
#define f0(i,n) for(int i=0; i<n; i++)
#define ff(i,q) for(int i=0; i<q; i++)
#define fi first
#define se second
const int  m  = 200005;

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	
		int n; cin >> n;
		vector<int> v(n);
		
		f0(i,n) cin >> v[i];
		
		sort(v.begin(), v.end());
		
		int q; cin >> q;
		int r = 0;
		
		ff(i,q){
			int y; cin >> y;
			
			auto z = upper_bound(v.begin(), v.end(), y);
			int r  = z - v.begin();
			
			cout << r << endl << endl;
		}
	
			
	return 0;
}








