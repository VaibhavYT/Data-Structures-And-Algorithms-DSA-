#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    //int i = 0;
    for(int i = 0; i<n; i++){
        if(array[i] == i+1){
            cout<<array[i];
        }
    }
    return 0;
    
}