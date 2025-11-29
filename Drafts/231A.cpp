#include <iostream>
#include <string>
using namespace std;

int main(){

        int n; cin >>n;
        int a,b,c;
        int result = 0;

        for(int i=0;i<n;i++){
            cin >> a >> b >> c;
            if(a + b + c > 1) result ++;
        }
        cout << result << endl;

    return 0;
}
