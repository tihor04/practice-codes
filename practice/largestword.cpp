#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cout<<"enter n"<<endl;

    cin>>n;
    cin.ignore();
 cout<<"enter the sentence"<<endl;
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int curr=0;
    int maxlen=0;
 int i=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(curr>maxlen)
            {
                maxlen=curr;
                
            }
            curr=0;
        }
        else{
            curr++;
        }
        if(arr[i]=='\0')
        break;

        i++;
    }
    cout<<arr<<endl;
    cout<<maxlen;
    return 0;
}