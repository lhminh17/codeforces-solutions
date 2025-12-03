#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	
	int l = 0;
	int r = n - 1;
	
	int x = 0;
	int y = 0;
	
	int z = 0;
	int q = 0;
	
	while(l <= r){
		if(v[l] < v[r]){
			q = v[r];
			r--;
		}else{
			q = v[l];
			l++;
		}
		
		if(z % 2 == 0){
			x += q;		
		}else{
			y += q;
		}
		z++;
	}
	
	cout << x << " "<<  y << endl;
	return 0;
}



