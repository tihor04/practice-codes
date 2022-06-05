#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,m,q;
        cin>>n>>m>>q;
       unordered_set<int> s;
       int count=0;
       bool flag=true;
        for(int i=0;i,q;i++)
        {
            if(head>m)
            {
                flag=false;
                break;
            }
            char ch;
            int p;
            cin>>ch;
            cin>>p;
           if(s.find(p)!=s.find())
           {
               if(ch=='-')
               count--;
               else
               {
                   flag=false;
                   break;
               }
           }
           else 
           {
               if(ch=='-')
               {
                   flag=false;
                   break;
               }
               else
               {
                   s.insert(p);
                   count++;
               }
           }
            
        }

        
        if(flag==true)
        cout<<"Consistent"<<endl;
        else
        cout<<"Inconsistent"<<endl;

    }
    return 0;
}