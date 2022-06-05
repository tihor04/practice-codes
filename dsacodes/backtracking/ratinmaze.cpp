#include <bits/stdc++.h>
using namespace std;

int n=4;

bool issafe(int maze[n][n],int i,int j)
{
    if(i<n&&j<n&&maze[i][j]==1)
    {
        return true;
    }
    return false;
}

bool findpath(int maze[n][n],int i,int j,int sol[n][n])
{
    if(i==n-1&&j==n-1)
    {
        sol[i][j]=1;
        return true;
    }
    if(issafe(i,j,maze)==true)
    {
        sol[i][j]=1;
        if(findpath(maze,i+1,j,sol,n))
        return true;
        if(findpath(maze,i,j+1,n))
        return true;
        sol[i][j]=0;
    }

    return false;
}

int main()
{

    int maze[n][n]={{1,0,0,0},
                     {1,1,0,0},
                     {0,1,0,0},
                     {1,1,1,1}};
    int sol[n][n]={{0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0}};

    if(findpath(maze,0,0,sol)==true)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<sol[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}