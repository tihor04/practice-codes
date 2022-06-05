#include<iostream>
using namespace std;
int main()
{
   

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int savings;
    cin>>savings;
     if(savings>=3000)
     {
         cout<<"kamra";

     }
     else if(savings>=1000)
     {
         cout<<"chainika";

     }
     else
     {
         cout<<"parwani";
     }

    return 0;
}