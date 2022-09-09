#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int e;
    cin>>e;
//adjcency Matrix
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        arr[i][j]=0;
    }
}
for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
    arr[u][v]=1;
    arr[v][u]=1; //Remove this for dircted graph
}


//Adjacenc List
    vector<int>app[n+1];
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        app[a].push_back(b);
        app[b].push_back(a);//Remove this for dircted graph
    }

    for(int i=0;i<=n;i++){
        cout<<i<<"->";
        for(auto k:arr[i]){
            cout<<k<<" ";
        }cout<<"\n";
    }
}