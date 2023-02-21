/* list abstract data types can be implemented using arrays or linked list.In linked list the data is
not stored in continuous memory location.Data is scattered here and there in memory. Relative positi-
-oning of the list items is maintained with the help of links.A link is a pointer to the next item of
the list, i.e., each link points to the next item. lsit item together with a link is called as node.
Nodes are the basic building blocks of a linked list. nodes are connected together by links and they
together represent the linear order of the list.
Dynamic data structure made up of nodes arranged in sequential form. A dynamic data structure can ex-
-pand/shrink easily during run time therefore a linked list doesn't have a predetermined fixed size.
Data here is not stored in a continuous memory locations. insertion and deletion of elements is easi-
-er due to the lack of need to relocate or reorganize the whole structure.Can be used to implement
abstract data types like stack,queue, list. It also has some disadvantages like it doesn't have effic-
-ient random access and extra memory is required for the implementation. We have single ll, double ll
,circular ll,ll with header note, sorted ll. Single ll is made of nodes with two parts each say part1
and part2 |_1_|_2_|, 1 contains the data or info while 2 contains the link to the next node.Null link
is used for the end of the list while start node is used for the beginning of the list. 
Traversal:Means visiting each node exactly once. 
Moving a pointer forward in a ll: p=p->next where it means that p is changed to the link of the node 
it is pointed at. 
For transversal of a list we take a pointer p which is intialized to start or beginning link. while 
visiting each node the content of the node is displayed using cout. then p is moved forward to the 
next link. */
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class Node
{
	public:
		int info;
		Node *next;

		Node(int i) 
		{
			info = i;
			next = nullptr;
		}
};
class SingleLinkedListH
{
	    Node *head;
		bool isEmpty() const;
		
	public:
		SingleLinkedListH();// constructor 
		SingleLinkedListH(const SingleLinkedListH& L);// copy constructor 
		~SingleLinkedListH();//destructor 
		void createList();// create link list 
		void displayList() const;// display the elements 
		void insertAtEnd(int data);//insertion 
		void insertBefore(int data,int x);//insertion
		void insertAtPosition(int data,int position);//insertion 
		void deleteNode(int x);//deletion of an element 
		void reverseList();// reversing the list 
};

SingleLinkedListH::SingleLinkedListH()
{
	head = new Node(0);
}

SingleLinkedListH::SingleLinkedListH(const SingleLinkedListH& L)
{
	Node *p1,*p2;
		
	p1 = L.head;
	p2 = head = new Node(p1->info);
	p1 = p1->next;

	while( p1 != NULL )
	{		
		p2->next = new Node(p1->info);
		p2 = p2->next;
		p1 = p1->next;
	}
	p2->next = NULL;
}

SingleLinkedListH::~SingleLinkedListH()
{
	Node *p;
	while( head != NULL )
	{
		p = head->next;
		delete head;
		head = p;
	}
}

inline bool SingleLinkedListH::isEmpty() const
{
	return head->next == NULL;
}

void SingleLinkedListH::displayList() const
{
	Node *p;
	if( isEmpty() )
	{
		cout << "List is empty\n";
		return;
	}
	p = head->next;
	cout << "List is :\n";
	while( p != NULL )//traversal or display has the same piece of code 
	{
		cout << p->info << "  ";
		p = p->next;
	}
	cout << "\n\n";
}

void SingleLinkedListH::insertAtEnd(int data)
{
	Node *temp = new Node(data);
	
	Node *p = head;
	while( p->next != NULL )
		p = p->next ;
	
	p->next = temp;
}

void SingleLinkedListH::createList()
{
	int i,n,data;
	
	cout << "Enter the number of nodes : ";
	cin >> n;
	
	if( n <= 0 )
		return;

	Node *p = head;
	for( i=1; i<=n; i++ )
	{
		cout << "Enter the element to be inserted : ";
		cin >> data;
		Node *temp = new Node(data);
	    p->next = temp;
	    p = temp;
	}
}

void SingleLinkedListH::insertBefore(int data,int x)
{
	/*Find pointer to predecessor of node containing x*/
	Node *p = head;
	while( p->next != NULL )
	{
		if ( p->next->info == x )
			break;
		p = p->next;
	}
		
	if ( p->next == NULL )
		cout << x << " not present in the list";
	else
	{
		Node *temp = new Node(data);
		temp->next = p->next;
		p->next = temp;
	}
}

void SingleLinkedListH::insertAtPosition(int data,int k)
{
	int i;
	Node *p = head;
	for( i = 1; i <= k-1 && p != NULL; i++ )
		p = p->next ;
	
	if( p == NULL )
		cout << "You can insert only upto " << i-1 << "th position\n\n";
	else
	{
		Node *temp = new Node(data);
		temp->next = p->next;
		p->next = temp;
	}	
}

void SingleLinkedListH::deleteNode(int x)
{
	Node *p = head;
	while(p->next != NULL)
	{
		if(p->next->info == x)   
			break;
		p = p->next ;
	}

	if(p->next == NULL)
		cout << "Element " << x << " not present in the list\n";
	else
	{
		Node *temp = p->next;
		p->next = temp->next;
		delete temp;
	}
}

void SingleLinkedListH::reverseList()
{
	Node *prev, *p, *next;
    prev = NULL;
    p = head->next;
    while (p != NULL)
    {
		next = p->next;
        p->next = prev;
        prev = p;
        p = next;
    }
    head->next = prev;
}

int main()
{
	SingleLinkedListH list;
	list.createList();

	int choice,data,item,position;
	
	while(1)
	{
		cout << "\n";
		cout << "1.Display list\n";
		cout << "2.Insert a node at the end of the list\n";
		cout << "3.Insert a node before a specified node\n";
		cout << "4.Insert a node at a given position\n";
		cout << "5.Delete any node\n";
		cout << "6.Reverse the list\n";
		cout << "7.Quit\n";
		cout << "Enter your choice : ";
		cin >> choice;
		
		if( choice == 7 )
			break;

		switch(choice)
		{
		 case 1:
			list.displayList();
			break;
		 case 2:
			cout << "Enter the element to be inserted : ";
			cin >> data;
			list.insertAtEnd(data);
			break;
		 case 3:
			cout << "Enter the element to be inserted : ";
			cin >> data;
			cout << "Enter the element before which to insert : ";
			cin >> item;
			list.insertBefore(data,item);
			break;
		 case 4:
			cout << "Enter the element to be inserted : ";
			cin >> data;
			cout << "Enter the position at which to insert : ";
			cin >> position;
			list.insertAtPosition(data,position);
			break;
		 case 5:
			cout << "Enter the element to be deleted : ";
			cin >> data;
			list.deleteNode(data);	
			break;  
		 case 6:
			list.reverseList();
			break;
		 default:
			 cout << "Wrong Choice\n";
			 break;
		}
	}
	cout << "Exiting Harmehar Kaur[DSA]  \n";
}

