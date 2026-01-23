#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,m; cin >>a n >> m;
	int v[n];
	int u[m];

	for(int i=0; i<n; i++) cin >> v[i];
	for(int i=0; i<m; i++) cin >> u[i];
	
	int count = 1;
	for(int i=0; i<n; i++){
		if(v[i] == u[count]) count++;
	}

	if(count == m) cout << "YES";
	else cout << "NO";

	return 0;	  	
}
