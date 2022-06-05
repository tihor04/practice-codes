#include "bits/stdc++.h"

using namespace std;

int febonachi(int n)
{if(n==0)
return 0;
if(n==1)
return 1;

return febonachi(n-1)+febonachi(n-2);
    
}

int main()
{
    int n=4;
    cout<<febonachi(n)<<endl;
    return 0;
}