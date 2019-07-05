#include<iostream>
using namespace std;
class node //this is the node
{
    public:
    int data;
    node* next;
};
void printlist(node* head_ref)  //function to print the list
{
    cout<<"The values are:"<<endl;
    while(head_ref != NULL)
    {
    cout<<(head_ref)->data<<"\t";
    (head_ref) = (head_ref)->next;
    }
}
void push(node** head_ref, int newdata)//code to push the data into the list
{
    node* new_node = new node();
    new_node->data = newdata;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
int main()
{
    int a;
    char c;
    node* head = NULL;
    head = new node();
    cout<<"Enter the data into head node"<<endl;
    cin>>a;
    head->data = a;
    while(true)
    {
    cout<<"Enter the value"<<endl;
    cin>>a;
    push(&head, a);
    cout<<"Enter c to continue, e to exit loop"<<endl;
    cin>>c;
    if(c == 'e')
    {
        break;
    }
    }
    printlist(head);
    return 0;
}
