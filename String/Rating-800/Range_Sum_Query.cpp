#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,q; cin >> n >> q;
    long long prefix[100005];

    prefix[0] = 0;
    for(long long i=1; i<=n; i++){
        long long x; cin >>x;
        prefix[i] = prefix[i - 1] + x;
    }
        
    while(q--){
        long long l,r; cin >> l >>r;
        cout << prefix[r] - prefix[l - 1] << "\n";    
    }   

    return 0;
    
}  
