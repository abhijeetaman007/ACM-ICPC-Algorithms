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
Node* insertele(Node*head,int pos,int ele){
    Node*newNode=new Node(ele);
    int count=0;
    Node*temp=head;
    if(pos==0){
        head=newNode;
        newNode->next=temp;
        return head;
    }
    else{
            while(temp!=NULL&&count<pos-1){
                temp=temp->next;
                count++;
            }
            if(temp!=NULL){
                Node*a=temp->next;
                temp->next=newNode;
                newNode->next=a;
            }

            return head;
    }

}
int main(){
    int i,data;
    cout<<"enter ele"<<endl;
    cin>>data;
    cout<<"enter pos"<<endl;
    cin>>i;
    Node*head =takeInput();
    head=insertele(head,i,data);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

}

