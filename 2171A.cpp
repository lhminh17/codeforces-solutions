#include <iostream>
using namespace std;

int zoo(int n){
    if((n & 1)) return 0;
    return (n/4)+1;
}

int main(){
    int t; 
    cin >> t;

    while (t--){
        int n;
        if(cin >> n){
            cout << zoo(n) << endl;
        }
    }
    
    return 0;
}