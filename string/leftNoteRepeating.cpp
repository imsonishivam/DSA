#include<iostream>
using namespace std;
int nonRepeating(string str)
{
    int count[256];
    int res = INT_MAX;
    memset(count,-1,sizeof(count));
    for(int i=0;i<str.length();i++)
    {
        if(count[str[i]] == -1)
            count[str[i]] = i;
        else{
            count[str[i]] = -2;
        }
    }
    for(int i=0;i<256;i++)
    {
        if(count[i]>=0)
        {
            res = min(res,count[i]);
        }
    }
    return res==INT_MAX ? -1 : res;
}
int main()
{
    string str;
    cin>>str;
    cout<<nonRepeating(str);
}
