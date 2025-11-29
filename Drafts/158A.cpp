#include <iostream>
using namespace std;

int main(){
    int n;cin >> n;
    int k; cin >>k;

    int score[n];
    int r = 0;

    for(int i = 0;i < n; i++) cin >> score[i];

    for(int i = 0;i < n; i++){
        if(score[i] >= score[k - 1] && score[i] > 0) r++;
    }

    cout <<r << endl;
    return 0;
}
