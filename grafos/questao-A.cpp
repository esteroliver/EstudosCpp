#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &grafo , vector<bool> &visitados, int i){
    visitados[i] = true;
    for (int x : grafo[i]){
        if (!visitados[x]) dfs(grafo, visitados, x);
    }
}

int main(){
    string s;
    getline(cin,s);
    int cs = stoi(s);
    getline(cin,s);
    
    for(int i = 0; i < cs; i++){
        getline(cin,s);
        char in_c = s[0];
        int quant = in_c - 'A' + 1;
        vector<vector<int>> g(quant);
        while(getline(cin,s), s != ""){
            int v=s[0] - 'A';
            int u=s[1] - 'A';
            g[v].push_back(u);
            g[v].push_back(u);
        }
        int resp = 0;
        vector<bool> visited(quant, false);
        int inc = 0;
        bool v = false;
        while(!v){
            int ver = 0;
            if(!visited[inc]){
                dfs(g, visited, inc);
                resp++;
            }
            for (int i = 0; i < quant; i++){
                if(visited[i]) ver++;
            }
            if (ver == quant) v = true;
            inc++;
        }
        cout << resp << endl;
    }

    

    return 0;
}