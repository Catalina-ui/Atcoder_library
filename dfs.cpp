#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

vector<vector<ll>> graph;
vector<ll> U;

void dfsU(ll v,ll t){
    U[v] = t, t++;
    for(auto next : graph[v]){
        if(U[next] != -1)
            continue;
        dfsU(next, t);
    }
}

