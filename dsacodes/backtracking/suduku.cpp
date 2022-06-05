#include<bits/stdc++.h>

using namespace std;

#define n 4

bool issafe(int sdk[n][n],int row,int col,int num)
{
    for(int i=0;i<n;i++)
    {
        if(sdk[i][col]==num || sdk[row][i]==num)
        return false;
    }

    int s=(int)sqrt(n);
    int rs=row-row%s;
    int cs=col-col%s;

    for(int i=0;i<s;i++)
    for(int j=0;j<s;j++)
    {
        if(sdk[i+rs][j+cs]==num)
        return false;
    }
    return true;
    }

bool solve(int sdk[n][n])
{
    int row=-1,col=-1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(sdk[i][j]==0)
            {
                row=i;
                col=j;
                break;
            }
        }
    }

    if(row==-1&&col==-1)
    return true;

    for(int num=1;num<=n;num++)
    {
        if(issafe(sdk,row,col,num))
        {
            sdk[row][col]=num;
            if(solve(sdk))
            return true;
            sdk[row][col]=0;
        }
    }

    return false;
}


int main()
{
    int sdk[n][n]={{1,0,3,0},
                    {0,0,2,1},
                    {0,1,0,2},
                    {2,4,0,0}};

      
    if(solve(sdk))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<sdk[i][j]<<" ";

            cout<<endl;
        }
    }
    else
    cout<<"not found";
    return 0;
}