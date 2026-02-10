#include <bits/stdc++.h>
using namespace std;

const int maxn = 200005;
int n,m;
//vector<int> lakes[maxn];
//bool visited[maxn];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;

    char snake[55][55];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) snake[i][j] = '.';
    }	

    bool b = true;

    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            for(int j=0; j<m; j++) snake[i][j] = '#';
        }
        else{
            if(b == true) snake[i][m - 1] = '#';
            else snake[i][0] = '#'; 
            b = !b;
        }
        
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cout << snake[i][j];
        cout << "\n";
    }


    return 0;
}
		
	
	






