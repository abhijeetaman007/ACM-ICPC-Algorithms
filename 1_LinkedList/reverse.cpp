//printing LL by taking input

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        //this->data means for the curr obj created
        this->data=data;
        next=NULL;
    }
};
Node* takeInput(){
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    //let head and tail point to null
    while(data!=-1){
        Node*newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
Node*rev(Node*head){
    Node*temp=head;
    Node*curr=head;
    Node*prev=NULL;
    while(temp!=NULL){
        temp=temp->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    head=prev;
    return head;
}
int main(){
    Node*head =takeInput();
    head=rev(head);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

}


