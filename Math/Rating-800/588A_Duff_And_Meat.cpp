#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin >> n;
	int a,p;
	int m = 9999;
	int t = 0;
	
	for(int i=0; i<n; i++){
		cin >> a >> p;
		if(p < m){
			m = p;
			t += p*a;
		}else{
			t += m*a;
		}
	}
	
	cout << t << endl;
	
	return 0;
}
	


