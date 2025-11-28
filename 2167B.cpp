#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


void your_name(string s, string t){
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s == t) {
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO" << endl;
    }
    
}
int main(){
    
    string s,t;
    int q;
    cin >> q;

    while(q--){
        int n;
        cin >>n;
        if(cin >> s >> t){
            your_name(s,t);
        }
    }
    return 0;
}