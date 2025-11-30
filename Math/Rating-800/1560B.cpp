#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        long long a,b,c;
        cin >> a>> b >> c;

        long long half  = abs(a - b);
        long long total = 2*half;

        if(c > total || a > total || b > total) cout << -1 << endl;
        else{
            if(c <= half) cout << c + half << endl;
            else{
                cout << c - half << endl;
            }
        }
    }
    return 0;
}
