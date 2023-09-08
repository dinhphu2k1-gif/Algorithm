#include<bits/stdc++.h>
using namespace std;
 
int t, n, k;
vector<int> degree;
vector<vector<int>> graph;
vector<int> currleaf;
vector<bool> out;
 
int main(){
    // freopen("input.txt", "r", stdin);
    cin >> t;
    while(t--){
        cin >> n >> k;
        int nodecnt = 0;
        graph.assign(n+1, {});
        degree.assign(n+1, 0);
        out.assign(n+1, 0);
        currleaf.clear();
        for(int i = 0; i < n-1; i++){
            int a, b;
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
            degree[a]++;
            degree[b]++;
        }
        for(int i = 1; i <= n; i++){
            if(degree[i] <= 1){
                currleaf.push_back(i);
            }
        }
        vector<int> newleaf;
        for(int i = 0; i < k; i++){
            if(currleaf.size() == 0)break;
            newleaf.clear();
            for(int i = 0; i < currleaf.size(); i++){
                out[currleaf[i]]=true;
            }
            for(int i = 0; i < currleaf.size(); i++){
                for(auto v: graph[currleaf[i]]){
                    if(out[v])continue;
                    else{
                        degree[v]-=1;
                        if(degree[v] <= 1){
                            newleaf.push_back(v);
                        }
                    }
                }
            }
            currleaf=newleaf;
        }
        for(int i = 1; i <= n; i++){
            if(!out[i])nodecnt++;
        }
        cout << nodecnt << endl;
    }
    // fclose(stdin);

    return 0;
}