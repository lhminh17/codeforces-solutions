#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >>n;
	int v[n][n];

	long long primary = 0;
	long long secondary = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int x; cin >>x;

			if(i == j) primary += x;
			if(i + j == n - 1) secondary += x;
		}
	}

	cout << abs(primary - secondary);

	return 0;	  
}
