#include <iostream>
using namespace std;

bool check_square(int a,int b, int c,int d){
    if (a != b || a != c || a != d) return false;
    return true;  
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){ 
        int a,b,c,d;
        cin >>a >>b >>c >>d;
        if(check_square(a,b,c,d)) {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
