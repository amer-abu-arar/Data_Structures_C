
#include <stdlib.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

struct Node {   //linked list
	int data;
	struct Node* next;
};

struct Node* head; // global var


struct Node* Append(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;
	return head;

}


struct Node* InsertAtPosition(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	struct Node* tail = (struct Node*)malloc(sizeof(struct Node));

	temp->data = x;
	temp->next = NULL;
	//temp = head;
	if (head == NULL)
	{
		head = tail = temp
	}
	else
	{
		tail->next = temp
			tail = temp

			/*
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
		}
		temp->next = node;*/

			return head;

	}



	void Print()
	{
		struct Node* temp = head;
		while (temp != NULL)
		{
			printf(" %d", temp->data);
			temp = temp->next;
		}
		printf("\n");

	}

	int main() {
		head = NULL; // empty list
		printf("How many nodes?\n");
		int n, i, x;
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++)
		{
			printf("Enter the number\n");
			scanf_s("%d", &x);
			//Append(x);
			InsertAtPosition(x);
			Print();
		}


	}



	/*
		for (int i = 0; i < 5; i++)
		{
			add_node(i + 1, head, tail);
		};
		print_list(head);
		//remove_node(3, head, tail);
		print_list(head);
	}



	void add_node(int n, Node*& head, Node*& tail)
	{
		Node* tmp = new Node;
		tmp->data = n;
		tmp->next = NULL;

		if (head == NULL)
		{
			head = tmp;
			tail = tmp;
		}
		else
		{
			tail->next = tmp;
			tail = tail->next;
		}
	}

	*/
/*

struct node
{
	int data;
	struct node* next;
};

void add_node(int n, node*& head, node*& tail)
{
	node* tmp = new node;
	tmp->data = n;
	tmp->next = NULL;

	if (head == NULL)
	{
		head = tmp;
		tail = tmp;
	}
	else
	{
		tail->next = tmp;
		tail = tail->next;
	}
}

int main()
{
	node* head = NULL;
	node* tail = NULL;

	for (int i = 0; i < 5; i++)
	{
		add_node(i + 1, head, tail);
	};
	print_list(head);
	remove_node(3, head, tail);
	print_list(head);
}

*/