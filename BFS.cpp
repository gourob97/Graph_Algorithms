#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int main()
{
    vector <int> list[10];
    queue <int> q;

    int node,edge;
    int vis[10];

    vector<int> ::  iterator  it;

    cin>>node>>edge ;


    for(int i=0; i< edge; i++)
    {
        int u,v;
        cin>>u>>v;
        list[u-1].push_back(v-1);

    }


    for(int i=0; i<10; i++)
    {
        vis[i]=0;

    }



    int i=0;
    q.push(i);

    while(! q.empty())
    {

       int f=q.front();

        cout<<f +1<<" ";

        it=list[f].begin();

        while(it != list[f].end())
        {

            if(vis[*it]==0)
            {
                q.push(*it);
                vis[*it]=1;
            }
            it++;
        }

        q.pop();


    }



    return 0;

}
