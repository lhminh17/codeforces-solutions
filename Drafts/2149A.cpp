#include <iostream>
#include <vector>

using namespace std;

int be_positive(vector<int> array){
    int count = 0;
    int y = 0;
    
    for(int i=0;i<array.size();i++){
        if(array[i] == 0) count++;
        if(array[i] == -1) y++;
    }

    if((y & 1)) count += 2;
    
    return count;
}

int main(){
    
    int t; 
    cin>> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> array(n);
    
        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        cout << be_positive(array) << endl;
    }
    
    return 0;
}