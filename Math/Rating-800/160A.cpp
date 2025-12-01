#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> v(n);
	
	int total = 0;
	int count = 0;
	int x = 0;
	
	for(int i=0; i<n; i++){
		cin >>v[i];
		total += v[i];
	}
	
	sort(v.begin(), v.end());
	
	for(int i=n-1; i >= 0; i--){
		total -= v[i];
		x += v[i];
		count++;
		if(total < x){
			cout << count << endl;
			break;
		}
	} 
	
	return 0;
}



