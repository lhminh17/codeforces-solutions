#include <bits/stdc++.h>
#define f0(i,n) for(int i=0; i<n; i++)
#define ff(i,n) for(int i=1; i<=n; i++)
#define fi first
#define se second
const int  m  = 200005;

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >>t; 
	while(t--){
		int n,k; cin >> n >> k;
		
		bool b = false;
		int y = k;
		int r = 0;
		
		f0(i,n){
			int x; cin >> x;
			if(b){
				b = false;
				k = y;
				continue;
			}
			
			if(x == 1){
				k = y;
			}else{
				k--;
				if(k == 0){
					r++;
					b = true;
				}	
			}
			
		}
		
		cout << r << endl;
		cout << endl;
	}
	
	return 0;
}








