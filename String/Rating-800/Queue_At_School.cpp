#include <bits/stdc++.h>
using namespace std;

const int maxn = 200005;
int n,m;
vector<int> tree[maxn];
bool visited[maxn];
queue<int> q;
int result [maxn];
bool b = false;
char people[maxn];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> people[i];

    while(m--){
    	for(int i=1; i<n; i++){
    		if(people[i - 1] == 'B' && people[i] == 'G'){
    			swap(people[i - 1], people[i]);
    			i++;
    		}
    	}
    }

    for(int i=0; i<n; i++) cout << people[i];

	return 0;
}
		
	
	






