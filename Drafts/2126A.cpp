#include <iostream>
using namespace std;

int only_one_digit(int x){
    int min = 9;
    while(x > 0){
        int digit = x % 10;
        if(min > digit){
            min = digit;
        }
        x /= 10;
    }
    return min;
}

int main(){
    int t; 
    cin >> t;

    while (t--){
        int x;
        if(cin >> x){
            cout << only_one_digit(x) << endl;
        }
    }
    
    return 0;
}




