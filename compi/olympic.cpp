#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int arr[6];
        int sum1=0,sum2=0;
        for(int i=0;i<6;i++)
        {
            cin>>arr[i];
          if(i<3)
          {
              sum1+=arr[i]l
          }
          else
          sum2+=arr[i];
        }

        if(sum1==sum2)
        {
            int i=0,j=3;
            while(i!=3)
            {
                if(arr[i]>arr[j])
                {
                     cout<<"1"<<endl;
                     break;
                }
                else if(arr[j]>arr[i])
                {
                    cout<<"2"<<endl;
                    break;
                }
                i++;
                j++;
               
            }
            
        }
        else
        {
            if(sum1>sum2)
            {
                cout<<"1"<<endl;

            }
            else
            {
                cout<<"2"<<endl;
            }
        }
    }
    return 0;
}