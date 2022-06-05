#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   
   int n;
   cin>>n;

   vector<ll> ans(n);

   for(int i=0;i<n;i++){
    cin>>ans[i];
   }


   int maxlen=-1;

   unordered_set<ll> st;

   for(int i=0;i<n;i++)
   {
      if(st.find(ans[i])!=st.end())
      {
        // if(st.size()>maxlen)
        //     maxlen=st.size();
        maxlen=max((int)st.size(),maxlen);
         cout<<st.size()<<" , ";

        st.clear();
      }
      else
      {
        st.insert(ans[i]);
      }
   }

   cout<<endl;


   if(maxlen==-1){
    cout<<0<<endl;
    return;
   }

   if(st.find(ans[ans.size()-1])!=st.end())
   {
    cout<<maxlen<<endl;
   }
   else{
    cout<<maxlen+st.size()<<endl;
   }


}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


  int t;
  cin>>t;


  while(t-->0) 
  solve();

 return 0;
}