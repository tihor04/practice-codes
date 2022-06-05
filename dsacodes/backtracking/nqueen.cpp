#include <bits/stdc++.h>

using namespace std;
const int n=4;
bool board[n][n];

bool issafe(int row,int col,bool board[n][n]){


    // to check in the respcetive column

    for(int i=0;i<col;i++)
    {
        if(board[row][i])
        return false;
    }

    //to check the upper diagonal of the matrix

    for(int i=row,j=col;i>=0&&j>=0;i--,j--)
    {
        if(board[i][j])
        return false;
    }
    
    //to check the lower diagonal of the matrix

    for(int i=row,j=col;i<n&&j>=0;i++,j--)
    {
        if(board[i][j])
        return false;
    }

    return true;
}

bool solverec(int col,bool board[n][n])
{
    //if we reach the end of the matrix then we return true


    if(col==n)return true;

    //movig to try out different values of row after fixing the column value

    for(int i=0;i<n;i++)
    {
        if(issafe(i,col,board))
        {
            board[i][col]=1;
            if(solverec(col+1,board))
            {
                return true;
            }
            board[i][col]=0;
        }

    }
    return false;
}

void solve(bool board[n][n])
{
    if(solverec(0,board)==false)
    return;
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<board[i][j]<<" ";
            cout<<endl;
        }
    }
}

int main()
{
     board[n][n]={false};

    solve(board);

    return 0;
}