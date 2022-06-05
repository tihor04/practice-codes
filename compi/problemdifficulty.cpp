#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t-->0)
    {
        int arr[4];
        unordered_map<int,int> map;
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
            map[arr[i]]++;
        }
        bool istrue=true;
        if(map.size()==4 || map.size()==3)
        {
           cout<<"2"<<endl;
           continue;
        }
        else if(map.size()==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        else
        {
            for(auto x:map)
            {
                if(x.second!=2)
                {
                    istrue=false;
                    break;
                }
            }
        }

        if(istrue)
        {
            cout<<"2"<<endl;
        }
        else
        cout<<"1"<<endl;

    }
    return 0;

}