#include <iostream>
using namespace std;
void findsubsets(string s,string curr,int i)
{
    if(i==s.length())
    {
        cout<<curr<<" "; 
        return;
    }
    findsubsets(s,curr,i+1);
    findsubsets(s,curr+s[i],i+1);
    
}

int main()
{

    string s="abc";
    findsubsets(s,"",0);
    return 0;
}