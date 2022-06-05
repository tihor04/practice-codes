#include <iostream> 

using namespace std;

int main()
{
    int t;
   
    while(t-->0)
    {
        int n;
        cin>>n;
        
       if(n==1){
           cout<<1<<" "<<0<<endl;
           continue;

           }
        if(n==2)
        {
            cout<<0<<" "<<1<<endl;
            continue;
        }
        


        if(n%3==0)
        {
              cout<<n/3<<" "<<n/3<<endl; 
              continue;
        }
        
        int k=1;
        int m=0;
       for(int i=0;i<3;i++)
       {
           if((n-k)%3==0)
           {
             m=(n-k)/3;
             break;
           }
           else
           k++;
       }

       if(k%2!=0)
       cout<<m+1<<" "<<m<<endl;
       else
       cout<<m<<" "<<m+1<<endl;


        
    }
}