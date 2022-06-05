#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   int n;
   cin>>n;
   string s;

   cin>>s;


   if(s.length()%2!=0){
       cout<<"NO"<<endl;
       return;
   }

   int zc=0;
   int oc=0;

   for(int i=0;i<s.length();i++){
       if(s[i]=='0')
       zc++;
       else
       oc++;
   }

   if(zc==oc){
       cout<<"YES"<<endl;
       bool of=false;
       bool zf=false;

       for(int i=0;i<n;i++){
           if(!of && s[i]=='1'){
           cout<<i+1<<" ";
           of=true;
           }
           else if(!zf && s[i]=='0'){
               cout<<i+1<<" ";
               zf=true;
           }
           if(zf&&of){
               cout<<endl;
               return;
           }
       }
   }

   if(abs(zc-oc)==2){
       cout<<"YES"<<endl;
       if(zc>oc){
           for(int i=0;i<n;i++){
               if(s[i]=='0')
               {
                   cout<<i+1<<" "<<i+1<<endl;
                   break;
               }
           }
           return;
       }
       else{
           for(int i=0;i<n;i++){
               if(s[i]=='1')
               {
                   cout<<i+1<<" "<<i+1<<endl;
                   break;
               }
           }
           return;

       }

   }

   if(abs(zc-oc)>n/2){
       cout<<"NO"<<endl;
       return;
   }
   else{
        cout<<"YES"<<endl;
       if(zc>oc){
           int k=2;
           for(int i=0;i<n;i++){
               if(s[i]=='0')
               {
                   cout<<i+1<<" ";
                   k--;
                   if(k==0)
                   break;
               }
           }
           cout<<endl;
           return;
       }
       else{
           int k=2;
           for(int i=0;i<n;i++){
               if(s[i]=='1')
               {
                   cout<<i+1<<" ";
                   k--;
                   if(k==0)
                   break;
               }
           }
           cout<<endl;
           return;

       }
      
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