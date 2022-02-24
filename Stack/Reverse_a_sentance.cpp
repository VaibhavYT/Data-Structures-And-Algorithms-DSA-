#include<bits/stdc++.h>

using namespace std;

void reverse(string ss){
    stack <string> s;
    for(int i =0; i<ss.length();i++){
        string word ="";
        while(ss[i] !=' ' && i<ss.length()){
            word+=ss[i];
            i++;
        }
        s.push(word);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;


}




int main(){
    string ss ;
    getline(cin,ss);
    reverse(ss);

}