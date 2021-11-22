#include<iostream>
using namespace std;

char repeating(string str){
    int count[256],res = INT_MAX;
    memset(count,-1,sizeof(count));
    for(int i=0;i<str.length();i++){
        if(count[str[i]] == -1)
            count[str[i]] = i;
        else
            res = min(res,count[str[i]]);
    }
    // (res == INT_MAX) ? return '#' : return str[res]; 
    if(res == INT_MAX)
        return '#';
    else
        return  str[res];
}

int main()
{
    int res = INT_MAX;
    string str;
    cin>>str;
    char repeating_char = repeating(str);
    repeating_char == '#' ? cout<<"-1" : cout<<repeating_char;
}