#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve()
{
   int n;
   cin>>n;

   if(isPrime(n))
   {
       int k=n+1;
       cout<<k<<endl;
       return;
   }

   int prev=0;
   int current=-1;
   int k=n+1;

   while(current<prev)
   {
     int gc=gcd(n,k);
     int lcm=n*k/gc;
       current=abs(gc-lcm);
       if(prev==-1)
       {
           prev=current;
       }
    


   }
   cout<<prev<<endl;
   

   
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