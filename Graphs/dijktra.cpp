#include<iostream>
#include<list>
#include<set>
#include<vector>
#include<climits>
using namespace std;

class Graph{
    int V;
    list<pair<int><int>> *l; //Declaration
public:
    Graph(int v){
        V = v;
    }

    void addEdge(int u,int v,int wt,bool undir=true){
        l[u].push_back({wt,v});
        if(undir){
            l[v].push_back({wt,u});
        }
    }

    int dijkstra(int src,int dest){

        //Data Structures
        vector<int> visited(V,INT_MAX);
        set<pair<int,int>> s;

        //1. Initialise
        dist[src]  = 0;
        s.insert({0,src});

        while(!s.empty()){

            auto it = s.begin();

            int node = it->second;
            int distTillNow = it->first;

            s.erase(it); //POP

            //Iterate over the nbrs of node
            for(auto nbrPair : l[node]){
                //...

                int nbr = nbrPair.second;
                int currentEdge = nbrPair.first;

                if(distTillNo + currentEdge < dist[nbr]){
                    //remove if nbr already exist in the set

                    auto f = s.find({dist[nbr],nbr});
                    if(f!=s.end()){
                        s.erase(f);
                    }
                    //insert the updated value with the new value
                    dist[nbr] = distTillNow + currentEdge;
                    s.insert({dist[nbr],nbr)});
                }
            }
        }
        //Single Source Shortest Dist to all other nodes
        for(int i=0;i<V;i++){
            cout<<"Node i"<<i<<"Dist"<<dist[i]<<endl;
        }
        return dist[dest];
    }
};

int main(){

    Graph g(5);
    g.addEdge(0,1,1);
    g.addEdge(1,2,2);
    g.addEdge(0,2,4);
    g.addEdge(0,3,7);
    g.addEdge(3,2,2);
    g.addEdge(3,4,3);
}