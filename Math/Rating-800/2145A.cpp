#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        long long n; cin >> n;
        long long r = n % 3;
        cout << (r == 0 ? 0 : 3 - r) << endl;
    }
    return 0;
}
