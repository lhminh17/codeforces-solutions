#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> task(vector<long long> s, vector<long long> f, int n){
    vector<long long> result;
    result.push_back(f[0] - s[0]);

    for(int i=1; i<n ; i++){
        long long start = max(s[i],f[i-1]);
        result.push_back(f[i] - start);
    }
    return result;
}

int main(){
    int t;cin >> t;
    while (t--){
        int n; cin >>n;
        vector<long long> s(n);
        vector<long long> f(n);

        for(int i=0;i<n ;i++){
            cin >>s[i];
        }
         for(int i=0;i<n ;i++){
            cin >>f[i];
        }

        vector<long long> result = task(s,f,n);

        for (int i = 0; i < n; ++i) {
            cout << result[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}
