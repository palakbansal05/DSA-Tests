#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& customers, vector<int>& grumpy, int minutes){
    int n=customers.size();
    int maxSum=0;
    int st=0;
    int end=minutes-1;
    int res=0;

    for(int i=0;i<minutes;i++){
        if(grumpy[i]==1)
            maxSum+=customers[i];
    }

    int currSum=maxSum;
    for(int i=1;i<n;i++){
        if(grumpy[i]==1)   
            currSum-=customers[i];
        if(grumpy[i+minutes-1]==1)
            currSum+=customers[i+minutes-1];
        if(currSum>maxSum){
            maxSum=currSum;
            st=i;
            end=i+minutes-1;
        }
    }

    for(int i=0;i<n;i++){
        if(i>=st && i<=end)
            res+=customers[i];
        else if(grumpy[i]==0)
            res+=customers[i];
    }

    return res;
}
int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int>customers(n);
    cout<<"Enter customers: ";
    for(int i=0;i<n;i++){
        cin>>customers[i];
    }

    vector<int>grumpy(n);
    cout<<"Enter grumpy: ";
    for(int i=0;i<n;i++){
        cin>>grumpy[i];
    }

    int minutes;
    cout<<"Enter minutes: ";
    cin>> minutes;

    int res=solve(customers,grumpy,minutes);
    cout<<res;

}