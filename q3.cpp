#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& p, vector<int>& h, string d){
    int n=p.size();
    vector<int> res;
    vector<tuple<int,int,char,int>> arr;
    for(int i=0;i<n;i++){
        
    }
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    vector<int> positions(n);
    cout<<"Enter Positions: ";
    for(int i=0;i<n;i++){
        cin>>positions[i];
    }

    vector<int> healths(n);
    cout<<"Enter Healths: ";
    for(int i=0;i<n;i++){
        cin>>healths[i];
    }

    string directions;
    cout<<"Enter directions: ";
    cin>>directions;

    vector<int>res=solve(positions,healths,directions);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}