#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//const int M = 5;
class GRAF{
		int jmlhsmpl;
		vector<vector<int> > adjas;
	public:
		GRAF(int simpul);
		void tmbhtepi(int src, int des);
		void display();
};

GRAF::GRAF(int simpul){
		jmlhsmpl = simpul;
		adjas.resize(simpul);
}

void GRAF::tmbhtepi(int src, int dest){
	adjas[src].push_back(dest);
	adjas[dest].push_back(src);
	
}
		
void GRAF::display(){
	for(int i = 0; i < jmlhsmpl; ++i){
		cout<<"Simpul "<<i<<" : ";
		for(size_t j = 0; j < adjas[i].size(); ++j){
			cout<<adjas[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	
	queue<pair<int,int> >edges;
	GRAF gra(5);
	gra.tmbhtepi(0, 1);
	gra.tmbhtepi(0, 4);
	gra.tmbhtepi(1, 2);
	gra.tmbhtepi(1, 3);
	gra.tmbhtepi(1, 4);
	gra.tmbhtepi(2, 3);
	gra.tmbhtepi(3, 4);

while(!edges.empty()){
	pair<int, int>edge = edges.front();
	gra.tmbhtepi(edge.first, edge.second);
	edges.pop();		
}
	cout<<"Graf Dengan Daftar Adjasi: "<<endl;
	gra.display();
}

#include<iostream>
#include<vector>
#include<queue>

#define M 1000

using namespace std;

const int N = 5;

void dijkstra(int graph[N][N], int source, int destination) {
	vector<pair<int, int > > adj[N];
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			if (graph[i][i] !=M) {
				adj[i].push_back(make_pair(j, graph[i][j]));
			}
		}
	}
int Q[N], R[N];
for (int i=0; i<N; i++) {
	Q[i]=M;
	R[i]=-1;
}
priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
pq.push(make_pair(0, source - 1));
Q[source - 1] = 0;
while (!pq.empty()) {
	int u=pq.top().second;
	pq.pop();
	
	for(int i=0; i<adj[u].size(); i++) {
		int v=adj[u][i].first;
		int w=adj[u][i].second;
		
		if (Q[v]>Q[u]+w) {
			Q[v]=Q[u]+w;
			R[v]=u;
			pq.push(make_pair(Q[v], v));
		
			}
		}	
	}
	
cout<<"beban=";
for (int i=0; i<N; i++) {
	cout<<Q[i] <<" ";
}

cout<<endl;
cout<<"Rute = ";
for (int i=0; i<N; i++) {
	cout<<R[i]<<" ";
}
cout<<endl;
}

int main () {
	int graph[N][N] = {{0, 1, 3, M, M},
						{M, 0, 1, M, 5},
						{3, M, 0, 2, M},
						{M, M, M, 0, 1},
						{M, M, M, M, 0}};
						
						
int source, destination;
cout<<"Masukan node asal : ";
cin>>source;
cout<<"Masukkan node tujuan : ";
cin>>destination;

dijkstra(graph, source, destination);

return 0;
}
