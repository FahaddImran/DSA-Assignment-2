//#include<iostream>
//#include<cstring>
//using namespace std;
//struct Node {
//	string data;
//	Node* next;
//	Node* prev;
//};
//class MobileKeypad
//{
//private:
//	Node** head;
//	Node** tail;
//public:
//	MobileKeypad()
//	{
//		head = new Node * [9];
//		tail = new Node * [9];
//		for (int i = 1; i <= 9; i++)
//		{
//			head[i] = NULL;
//			tail[i] = NULL;
//		}
//	}
//	void setter()
//	{
//		int set = 65;
//
//		for (int i = 1; i <= 9; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				if (i == 1)
//				{
//					Node* newnode = new Node;
//					newnode->data = '-';
//					if (head[i] == NULL)
//					{
//						newnode->next = NULL;
//						newnode->prev = NULL;
//						head[i] = newnode;
//						tail[i] = newnode;
//					}
//					else
//					{
//						tail[i]->next = newnode;
//						newnode->next = NULL;
//						newnode->prev = tail[i];
//						tail[i] = newnode;
//						tail[i]->prev = newnode;
//					}
//
//				}
//				else
//				{
//					Node* newnode = new Node;
//					newnode->data = set;
//					if (head[i] == NULL)
//					{
//						newnode->next = NULL;
//						newnode->prev = NULL;
//						head[i] = newnode;
//						tail[i] = newnode;
//						if (i == 7 || i == 9)
//							j--;
//					}
//					else
//					{
//						tail[i]->next = newnode;
//						newnode->next = NULL;
//						newnode->prev = tail[i];
//						tail[i] = newnode;
//
//					}
//
//					set++;
//				}
//			}
//		}
//
//	}
//	void input()
//	{
//		int count1 = 0, num = 1, total = 0;
//		int* array = new int[9];
//		for (int i = 0; i < 9; i++)
//			array[i] = 0;
//
//		cout << "Enter any number from 2-9, (THE DIGITS SHOULD NOT BE MORE THAN 8)\n Press 0 to exit\n";
//		{
//			while (true)
//			{
//				cin >> num;
//				if (num == 0)
//					break;
//				if (num < 2 || num>9)
//				{
//					cout << "INVALID NUMBER\n";
//					continue;
//				}
//				array[count1] = num;
//				count1++;
//			}
//		}
//		total = count1;
//		cout << "Total possible combinations are :\n";
//		cout << combination(total, array);
//
//
//	}
//
//	string& combination(int total, int* array)
//	{
//		static string result;
//		static int count = 0;
//		
//		static int digit = total-1;
//
//		if (digit != 0)
//		{
//			static Node*temp = head[array[count]];
//			result = result + temp->data;
//			if (count==digit)
//			{
//				if (temp->next == NULL)
//				{
//					Node* recover;
//					while (count>=0&&head[array[count]]->next == NULL)
//					{
//						recover = tail[array[count]];
//						while (recover->prev != NULL)
//							recover = recover->prev;
//
//						head[array[count]] = recover;
//						head[array[count]]->next = recover->next;
//						count--;
//					}
//					if (count < 0)
//						return result;
//
//					count++;
//					temp = head[array[count]];
//					temp = head[array[--count]];
//				}
//			    if (temp->next != NULL)
//			    {
//				temp = temp->next;
//				head[array[count]] = temp;
//				head[array[count]]->next = temp->next;
//				count = -1;
//				result = result + " ";
//			    }
//			}
//			if(count<total)
//			{
//				temp = head[array[++count]];
//			}
//			combination(total, array);
//
//			
//		}
//		return result;
//	}
//
//	void print()
//	{
//		Node* temp;
//		for (int i = 1; i <= 9; i++)
//		{
//			temp = head[i];
//			;			while (temp != NULL)
//			{
//				cout << i << "->" << temp->data;
//				cout << " ";
//				temp = temp->next;
//			}
//			cout << endl;
//		}
//	}
//};
//int main()
//{
//	MobileKeypad obj;
//	obj.setter();
//	obj.print();
//	obj.input();
//	return 0;
//}