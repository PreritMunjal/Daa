#include<bits/stdc++.h>
using namespace std;

#define  V 5
#define INF 9999

void printsolution(int dist[][V]);
void floydwarshall(int graph[][V])
{
    int dist[V][V],i,j,k;
    for(i=0;i<V;i++)
     for(j=0;j<V;j++)
        dist[i][j]=graph[i][j];
    for(k=0;k<V;k++)
    {
        for(i=0;i<V;i++)
        {
          for(j=0;j<V;j++)
          {
              if(dist[i][j]>(dist[i][k] +dist[k][j]) &&(dist[k][j] != INF && dist [i][k] !=INF))
              dist[i][j] =dist[i][k] +dist[k][j];
          }
        }
     
    }
    printsolution(dist);
}
void printsolution(int dist[][V])
{
    cout<<"matrix shows path \n";
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            if(dist[i][j] == INF)
            cout<<"INF"<<" ";
            else
            cout<<dist[i][j]<< " ";
        }
        cout<< endl;
    }
}
int main()
{
    int graph[V][V]= { {0,10,5,5,INF},
                       {INF,0,5,5,5},
                       {INF,INF,0,INF,10},
                       {INF,INF,INF,0,20},
                       {INF,INF,INF,5,0 } };
        
                      
    floydwarshall(graph);
    return 0;
}
