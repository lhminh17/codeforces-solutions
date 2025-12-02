#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int s,n; cin >>s >> n;
	vector<pair<int, int>> v(n);
	
	for(int i=0; i<n; i++){
		cin >> v[i].first >> v[i].second;
	}
	
	sort(v.begin(), v.end());
	
	for(auto i : v){
		if(s > i.first) s += i.second;
		else{
			cout << "NO" << endl;
			return 0;
		}
	}

	
	cout << "YES" << endl;
	
	
	return 0;
}



