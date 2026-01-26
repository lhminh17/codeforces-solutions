#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q; cin >> n >> q;
    int v[100005];

    for(int i=0; i<n; i++) cin >> v[i];
    
    sort(v, v + n);
    
    while(q--){
        int x; cin >>x;

        int l = 0;
        int r = n - 1;

        bool b = false;
        while(l <= r){
            int mid = (l + r)/ 2;
            if(v[mid] == x){
                b = true;
                break;
            }    
            else if(v[mid] < x) l = mid + 1;
            else r = mid - 1;
        }

        if(b) cout << "found" << "\n";
        else cout << "not found" << "\n";
    }
    

    return 0;
    
}
