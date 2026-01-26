#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >>n;
    int v[n + 5];

    for(int i=1; i<=n; i++) cin >> v[i];
    
    for(int i=1; i<=n; i++){
        if(v[v[v[i]]] == i){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
    
}
