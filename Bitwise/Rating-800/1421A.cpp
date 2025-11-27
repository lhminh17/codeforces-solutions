#include <iostream>
using namespace std;

int xor_wice(int a,int b){
    return  a ^ b;
}

int main(){

    int t;
    cin >> t;
    int a,b;

    while (t--){
        if(cin>> a>> b){
            cout << xor_wice(a,b) << endl;
        }
    }
    return 0;
}