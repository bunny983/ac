#include<iostream>
#include<vector>
#include<limits>
using namespace std;
struct Edge{
	int src,dest,weight;
};
void BellmanFord(const vector<Edge>&edges,int V,int E,int src)
{
	vector<int> dist(V,numeric_limits<int>::max());
	dist[src]=0;
	for(int i=0;i<V-1;i++)
	{
		 for (int j = 0; j < E; ++j) {
            if (dist[edges[j].src] != numeric_limits<int>::max() && dist[edges[j].src] + edges[j].weight < dist[edges[j].dest]) {
                dist[edges[j].dest] = dist[edges[j].src] + edges[j].weight;
            }
	}
}
	cout<<"source\t distance"<<endl;
	for(int i=0;i<V;i++)
	{
		cout<<i<<"\t"<<dist[i]<<endl;
	}
}
int main()
{
	vector<Edge>edges;
	edges.push_back({0, 1, -1});
    edges.push_back({0, 2, 4});
    edges.push_back({1, 2, 3});
    edges.push_back({1, 3, 2});
    edges.push_back({1, 4, 2});
    edges.push_back({3, 2, 5});
	edges.push_back({3, 1, 1});
	edges.push_back({4, 3, -3});
	BellmanFord(edges,5,8,0);
	return 0;
}
