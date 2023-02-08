#include<iostream>
using namespace std;
int main()
{

return 0;
}#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
Node *insertEnd(Node *head,int x){
	Node *temp=new Node(x);
	if(head==NULL){
		temp->next=temp;
		return temp;
	}
	else{
		Node *curr=head;
		while(curr->next!=head)
		curr=curr->next;
		curr->next=temp;
		temp->next=head;
		return head;
	}
}
int main()
{
	Node *head=NULL;
	head=insertAtEnd(head,10);
	head=insertAtEnd(head,20);//inserting a node at end of cll
	return 0;
}

