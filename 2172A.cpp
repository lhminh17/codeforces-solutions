#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void ascii_art_contest(int a,int b,int c){
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    
    sort(v.begin(),v.end());


    if(v[2] - v[0] >= 10) {
        cout <<"check again" << endl;
    }else{
        cout << "final " << v[1]<< endl;
    }
}
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;

    if(cin>> a>> b>> c){
        ascii_art_contest(a,b,c);
    }
    return 0;
}