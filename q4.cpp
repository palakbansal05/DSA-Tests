#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};

Node* solve(Node* head){
    if(!head)
        return nullptr;
    Node dummy(0);
    dummy.next=head;
    unordered_map<int,Node*>mp;
    Node* temp=head;
    int sum=0;
    while(temp){
        sum+=temp->data;
        mp[sum]=temp;
        temp=temp->next;
    }

    temp=&dummy;
    while(temp){
        temp->next=mp[temp->data]->next;
    }
    return dummy.next;
}

void printLL(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    Node* root=new Node(1);
    root->next=new Node(2);
    root->next->next=new Node(-3);
    root->next->next->next=new Node(3);
    root->next->next->next->next=new Node(1);
    Node * newHead=solve(root);
    printLL(newHead);
}