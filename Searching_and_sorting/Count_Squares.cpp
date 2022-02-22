#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int res = sqrt(i);
        if(res%2==0){
            ans++;
        }
    }
    cout<<ans;
    

}