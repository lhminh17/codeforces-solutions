#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;cin >> n;
    int r = 0;
    while(n--){
        string s; cin >> s;


        for(int i=0;i<s.size();i++){
            if(s[i] == 'X') continue;
            if(s[i] == '+'){
                r++;
            }
            else{
                r--;
            }
        }
    }
    cout<< r/2 << endl;

    return 0;
}
