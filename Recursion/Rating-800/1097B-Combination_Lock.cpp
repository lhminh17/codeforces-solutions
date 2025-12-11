#include <iostream>
#include <vector>
//#include <string>
#include <algorithm>
//#include <cmath>
using namespace std;

int n;
vector<int> v;
bool b = false;


void solve(int i, int x){
	if(b == true) return;
	if(i == n){
		if(x % 360 == 0){
			b = true;
		}
		return;
	}
	
	solve(i + 1, x + v[i]);
	solve(i + 1, x - v[i]);
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;
	v.resize(n);
	for(int i=0; i<n; i++) cin >> v[i];
	
	solve(0,0);
	
	if(b == true) cout <<"YES" << endl;
	else cout << "NO" << endl;	
	
	
	return 0;	
}
