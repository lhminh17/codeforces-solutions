#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        long long n; cin >> n;
        n % 4 == 0 ? cout <<"Bob" << endl : cout << "Alice" << endl;
    }
    return 0;
}
