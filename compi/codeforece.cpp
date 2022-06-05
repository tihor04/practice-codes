    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long int

   void solve()
   {
       ll x,y;

       cin>>x>>y;

       if(x>y){
           cout<<"0 0 "<<endl;
           return;
       }

       if(y%x!=0){
           cout<<"0 0 "<<endl;
           return;

       }
       cout<<1<<" "<<y/x<<endl;

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