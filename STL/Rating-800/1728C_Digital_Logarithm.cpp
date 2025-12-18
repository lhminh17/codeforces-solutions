#include <bits/stdc++.h>
#define f0(i,n) for(int i=0; i<n; i++)
#define f1(i,n) for(int i=1; i<=n; i++)
const int  m  = 200005;

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		priority_queue<int> qa, qb;
		
		f0(i,n){
			int x; cin >> x;
			qa.push(x);
		}
		
		f0(i,n){
			int x; cin >> x;
			qb.push(x);
		}
		
		int r = 0;
		
		while(!qa.empty()){
			int x = qa.top();
			int y = qb.top();
			
			if(x == y){
				qa.pop();
				qb.pop();
			}
			else{
				r++;
				if(x > y){
					qa.pop();
					qa.push(to_string(x).length());
				}else{
					qb.pop();
					qb.push(to_string(y).length());
				}		
			}
		}	
		
		cout << r << endl;
	}
	return 0;
}








