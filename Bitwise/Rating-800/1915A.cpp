#include <iostream>
using namespace std;

int ood_one_out(int a, int b, int c){
    if((a ^ b) == 0) return c;
    if( (a ^ c) == 0) return b;
    return a;
}
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t){
        while(t--){
            int a,b,c;
            if(cin >> a >> b >> c){
                cout << ood_one_out(a,b,c) << endl;
            }
        }
    }
    return 0;
}
