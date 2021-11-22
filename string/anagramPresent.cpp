#include<iostream> 
using namespace std;
bool areSame(int countTxtw[],int countPath[]){
    for(int i=0;i<256;i++){
        if(countTxtw[i] != countPath[i])
            return false;
    }
    return true;
}

bool anagramPresent(string txt,string path){
    int countTxtw[256] = {0};
    int countPath[256] = {0};
    for(int i=0;i<path.length();i++){
        countTxtw[txt[i]]++;
        countPath[path[i]]++;
    }
    for(int i=path.length();i<txt.length();i++){
    if(areSame(countTxtw,countPath)){
        return true;
    }
    countTxtw[txt[i]]++;
    countTxtw[txt[i-path.length()]]--;
    }
    return false;
}

int main(){
    string txt,path;
    cin>>txt>>path;
    if(anagramPresent(txt,path))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}