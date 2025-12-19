#include <bits/stdc++.h>
#define f0(i,n) for(int i=0; i<n; i++)
#define f1(i,n) for(int i=0; i<10; i++)
#define f(i,n) for(int i=0; i<n; i++) cin >> v[i] 
#define fi first
#define se second
const int  maxn  = 200005;

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int k,r; cin >> k >> r;
	
	int x = k % 10;
	int m = x;
	int y = 1;
	
	while(true){
		if(x % 10 == r || x % 10 == 0) break;
		x += m;
		y++;
		
	}
	
	cout << y << endl;
			
	return 0;	   
}








