#include <bits/stdc++.h>
using namespace std;

int n,m;
bool visited[1001];
vector<int> graphs[1001];
queue<int> q;

void input(){
	cin >> n >>m;
	for(int i=0; i<m; i++){
		int x,y; cin >> x >>y;
		graphs[x].push_back(y);
		graphs[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void dfs(int u){
	visited[u] = true;
	cout << u << " ";

	for(int x : graphs[u]){
		if(!visited[x]){
			visited[x] = true;
			dfs(x);
		}
	}
}

void bfs(int u){
	visited[u] = true;
	q.push(u);

	while(!q.empty()){
		int x = q.front(); 
		cout << x << " ";
		q.pop();

		for(int z : graphs[x]){
			if(!visited[z]){
				visited[z] = true;
				q.push(z);
			}
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    input();
    
    dfs(1);
    memset(visited, false, sizeof(visited));	
    cout << "\n";
    bfs(1);

	return 0;
}
		
	
	

