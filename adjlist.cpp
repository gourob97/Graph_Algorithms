#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> list[10];
    int indeg[10],outdeg[10],c;

    for(int i=0;i<10;i++)
    {
       indeg[i]=0;
       outdeg[i]=0;
    }

    int node,edge;

    vector<int> ::  iterator  it;

    cin>>node>>edge ;


    for(int i=0; i< edge; i++)
    {
        int u,v;
        cin>>u>>v;
        list[u-1].push_back(v);

    }


    for(int i=0; i<node; i++)
    {

         c=0;


       cout<<i+1<<"-->";

        it=list[i].begin();

        while( it != list[i].end() )
        {
             c++;

            cout<<*it <<" ";
            it++;
        }

        outdeg[i]=c;

        cout<<endl;



    }

    cout<<endl<<" Outgerge "<<endl;

    for(int i=0;i<node;i++)
    {
       cout<<i+1 <<" --> "<<outdeg[i];

       cout<<endl;
    }

    cout<<"Indegree "<<endl;

    for(int i=0;i<node;i++)
    {
       for(int j=0;j<node;j++)
       {
          it=list[j].begin();
          while(it != list[j].end())
          {
            if(*it == i+1)
            {
              indeg[i]++;
            }
            it++;
          }
       }
    }


   for(int i=0;i<node;i++)
   {
     cout<<i+1 <<" --> "<<indeg[i];

       cout<<endl;
    }



}
