//printing LL by taking input

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    //constructor called each time new Node made
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
int main(){
    Node*head =takeInput();
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

}

