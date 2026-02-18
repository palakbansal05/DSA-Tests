#include<bits/stdc++.h>
using namespace std;

vector<int> findKilled(vector<int>&pid, vector<int>&ppid, int kill){
    int n=pid.size();
    queue<int> q;
    vector<int>res;
    q.push(kill);

    unordered_map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        mp[ppid[i]].push_back(pid[i]);
    }
    while(!q.empty()){
        int top=q.front();
        q.pop();
        for(int ele:mp[top]){
            q.push(ele);
        }
        res.push_back(top);
    }
    return res;
}

int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    vector<int> pid(n);
    vector<int> ppid(n);
    int kill;
    cout<<"enter kill";
    cin>>kill;
    cout<<"enter pid: ";
    for(int i=0;i<n;i++){
        cin>>pid[i];
    }
    cout<<"enter ppid: ";
    for(int i=0;i<n;i++){
        cin>>ppid[i];
    }

    vector<int> res= findKilled(pid,ppid,kill);
    int m=res.size();
    for(int i=0;i<m;i++){
        cout<<res[i]<<" ";
    }
}