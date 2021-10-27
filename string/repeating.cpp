#include<iostream>
using namespace std;
int main()
{
    int res = INT_MAX;
    string str;
    cin>>str;
    int count[256];
    memset(count,-1,sizeof(count));
    for(int i=0;i<str.length();i++)
    {
        if(count[str[i]] == -1)
            count[str[i]] = i;
        else{
            res = min(res,count[str[i]]);
        }
    }
    if(res == INT_MAX)
    cout<<"-1";
    else
    cout<<res;
}