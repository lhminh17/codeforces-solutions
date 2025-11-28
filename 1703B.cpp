#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int balloons(string s,int n){

    int count = 0;
    unordered_map<char,bool> map;

    for(int i=0;i<s.size();i++){
        if(map.find(s[i]) == map.end()){
            count += 2;
            map.insert({s[i],true});
        }
        else{
            count++;
        }
    }
    return count;
}
int main(){
    int t; cin >> t;
    while (t--){
        int n;
        cin >>n;
        string s; cin >> s;
        cout << balloons(s,n)<< endl;
    }
    return 0;
}

