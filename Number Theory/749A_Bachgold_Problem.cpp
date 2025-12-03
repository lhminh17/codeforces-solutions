#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n; cin >> n;
	vector<int> v;
	
	while(n > 0){
		if(n & 1){
			n -= 3;
			v.push_back(3);
		}else{
			n -= 2;
			v.push_back(2);
		}
	}
	
	sort(v.begin(), v.end());
	
	cout << v.size() << endl;
	for(int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	
	
	return 0;
}
	


