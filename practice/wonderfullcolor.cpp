#include <bits/stdc++.h>


using namespace std;

int main(){

    int t;
    cin>>t;
    int k=t+1

    while(k-->0)
    {
        string str;
        getline(cin,str);

        unordered_map<char,int> s;

        for(int i=0;i<str.length();i++)
        s[str[i]]++;

        int n=str.length();

        int ans=0;
        
        for(auto x:s)
        {
            if(x.second>1)
            {
                ans++;
                n-=x.second;
            }
        }

        ans+=n/2;
        if(k!=t)
        cout<<ans<<endl;
    }
    return 0;
}