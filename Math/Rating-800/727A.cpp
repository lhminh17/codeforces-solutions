#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long a,b; cin >> a >> b;
	vector<long long > v;
	
	v.push_back(b);
	
	
	while(b > a){
		if( b % 2 == 0){
			b /= 2;
			v.push_back(b);
		}
		else if(b % 10 == 1){
			b /= 10;
			v.push_back(b);
		}
		else{
			cout << "NO" << endl;
			return 0;
		}	
	}
	
	sort(v.begin(), v.end());
	
	if(b != a) cout << "NO" << endl;
	else{
		cout <<"YES" << endl;
		cout << v.size() <<  endl;
		for(int i=0; i < v.size(); i++){
			cout << v[i] << " ";
		}
	}	
	
	return 0;
}



