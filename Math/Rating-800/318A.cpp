#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	long long n,k; cin >>n >>k;
	long long m = (n + 1)/2;
	if(k > m) cout << 2*(k - m) << endl;
	else{
		cout << 2*k - 1 << endl;
	}
	return 0;
}



