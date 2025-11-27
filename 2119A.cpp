#include <iostream>
#include <algorithm>
using namespace std;

long long cost(int a,int b, int x, int y){
    long long result = 0;
    
    if (a == b) return 0;

    if (a > b){
        if (a % 2 != 0 && b == a - 1){
            return y;
        }else{
            return -1;
        }
    }

    while (a < b){
        if (a % 2 != 0){
            result += x;
        }
        else{
            result += min(x,y); 
        }
        a++;
    }

    return result;
}
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t){
        while(t--){
            int a,b,x,y;
            cin>> a>> b>>x >>y;
            cout << cost(a,b,x,y) <<endl;
        }
    }
    return 0;
}