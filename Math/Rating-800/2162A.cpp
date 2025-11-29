#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;cin >>t;
    while(t--){
        int n;cin >>n;
        vector<int> v(n);

        for(int i=0; i<n;i++){
            cin >> v[i];
        }

        int avg = v[0];

        for(int i=1;i<v.size();i++){
            if(v[i] > avg){
                avg = v[i];
            }
        }
        cout << avg << endl;
    }
    return 0;
}
