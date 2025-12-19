#include <bits/stdc++.h>
#define f0(i,n) for(int i=0; i<n; i++)
#define f1(i,n) for(int i=0; i<10; i++)
#define f(i,n) for(int i=0; i<n; i++) cin >> v[i] 
#define fi first
#define se second
const int  m  = 200005;

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v(n);
		
		f(i,n);
		
		int x = 0;
		int y = x;
		
		f0(i,n){
			if(v[i] == 1){
				y = max(x,y);
				x = 0;
			}
			else x++;
		}
		
		y = max(x,y);
		
		cout << y << endl << endl;
	}
			
	
	
		
			
	return 0;	   
}








