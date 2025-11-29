#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;cin >>t;
    while(t--){

        string s; cin >>s;

        if(s.size() < 11){
            cout << s << endl;
        }
        else{
        string ss = to_string(s.size() - 2);
        string result = s[0] + ss + s[s.size() - 1];

        cout << result << endl;
        }
    }
    return 0;
}
