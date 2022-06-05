#include <bits/stdc++.h>
using namespace std;

  int findans(string s,int start,int end,int k){
        int arr[26];

        memset(arr,0,sizeof(arr));
        
       if(end-start<k)
           return 0;
        
        for(int i=start;i<end;i++)
        {
            arr[s[i]-'a']++;
        }
        
        for(int i=start;i<end;i++)
        {
            if(arr[s[i]-'a']<k){

            	int j=i+1;

            	while(j<end && arr[s[j]-'a']<k){
            		j++;
            	}
                
                return max(findans(s,start,i,k),findans(s,j,end,k));
            }
        }
        
        return end-start;
    }


int longestSubstring(string s, int k) {
      return   findans(s,0,s.length(),k);
    }


int main(){

	string s="aaabb";
	int k=3;
    cout<<longestSubstring(s,k);
	return 0;
}