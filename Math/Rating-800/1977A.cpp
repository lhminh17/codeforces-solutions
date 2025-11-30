#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        int n,m; cin >>n >>m;
        if(n < m) cout <<"NO" <<endl;
        else{
            if((n & 1) == (m & 1)) cout <<"YES"<< endl;
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
