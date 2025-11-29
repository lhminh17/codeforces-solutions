#include <iostream>
using namespace std;

int main(){
    int x; cin >>x;
    int count = 0;
    if(x <= 5) cout << 1 << endl;
    else{
        while(x > 5){
            count++;
            x -= 5;
        }
        cout << count + 1 <<endl;
    }
    return 0;
}

