//#include<iostream>
//#include<ctime>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* next;
//	Node* prev;
//};
//class linkedlist {
//private:
//	Node* head;
//	Node* tail;
//public:
//	linkedlist()
//	{
//		head = NULL;
//		tail = NULL;
//	}
//	void insertAtHead(int num)
//	{
//		Node* newnode = new Node;
//		newnode->data = num;
//		if (head == NULL)
//		{
//			newnode->next = NULL;
//			newnode->prev = NULL;
//			head = newnode;
//			tail = newnode;
//		}
//		else
//		{
//			newnode->next = head;
//			head->prev = newnode;
//			newnode->prev = NULL;
//			head = newnode;
//		}
//	}
//	void insertAtTail(int num)
//	{
//		Node* newnode = new Node;
//		newnode->data = num;
//		if (head == NULL)
//		{
//			newnode->next = NULL;
//			newnode->prev = NULL;
//			head = newnode;
//			tail = newnode;
//		}
//		else
//		{
//			newnode->prev = tail;
//			tail->next = newnode;
//			newnode->next = NULL;
//			tail = newnode;
//		}
//	}
//	void insertion()
//	{
//		srand(time(0));
//		int size = rand();
//		int num = 0;
//		for (int i = 0; i < size; i++)
//		{
//		    num = rand();
//			insertAtHead(num);
//			num = rand();
//			insertAtTail(num);
//		}
//	}
//	Node* FindMid()
//	{
//		Node* temp = head;
//		int count = 0;
//		while (temp != NULL)
//		{
//			temp = temp->next;
//			count++;
//		}
//		count = count / 2;
//		temp = head;
//		for (int i = 0; i < count; i++)
//		{
//			temp = temp->next;
//		}
//		return temp;
//		
//	}
//	void FindKey(int key)
//	{
//		Node* mid = FindMid();
//		 searching(mid, key);
//	}
//	void searching(Node* mid, int key)
//	{
//		if (key == mid->data)
//		{
//			cout << "KEY MIL GYI HAI\n";
//			return;
//		}
//		else if (key != mid->data)
//		{
//			static Node* backward = mid;
//			static Node* forward = mid;
//
//			if (backward != NULL && forward != NULL)
//			{
//				searching(backward->prev, key);
//			}
//			if (backward == NULL && forward != NULL)
//			{
//				searching(forward->next, key);
//			}
//			if (backward == NULL && forward == NULL)
//			{
//				insertion();
//				mid=FindMid();
//				backward = mid;
//				forward = mid;
//				searching(backward, key);
//			}
//		}
//	}
//};
//
//int main()
//{
//	int key = 0;
//	cout << "Enter the element you want ot search\n";
//	cin >> key;
//
//	linkedlist obj;
//	obj.insertion();
//	obj.FindKey(key);
//	return 0;
//}