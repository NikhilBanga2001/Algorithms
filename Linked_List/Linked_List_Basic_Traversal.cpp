#include<iostream>

using namespace std;

class Node
{
    public:
    char data;
    Node* next;

    
    void print();
    
};
    Node *start = NULL;
    void Node::print()
    {
       Node* ptr = start;

        while(ptr != NULL)
        {
            cout<<ptr->data <<"\t";
            ptr = ptr->next;
        }
        
    } 
int main()
{
    Node *n1 = new Node;
    Node *n2  = new Node;
    Node *n3= new Node;
    Node *n4= new Node;
    Node *n5= new Node;


    n1->data = 'a';
    n2->data = 'b';
    n3->data = 'c';
    n4->data = 'd';
    n5->data = 'e';
    n1->next = n2;    
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;
    
    start = n1;

    n1->print();
    return 0;
}
