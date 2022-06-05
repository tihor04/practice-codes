#include <iostream>
using namespace std;

int main() {
    int t=1;
   // cin>>t;
    while(t--){
        int n=4,p=2,x=3,y=2;
        int a[n]={0,1,0,1};

       
        int sum=0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<p;i++)
        {
            if(a[i]==1)
            sum=sum+y;
            else 
            sum=sum+x;
        }
        cout<<sum<<endl;
    }
    return 0;
}