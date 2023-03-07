//#include<iostream>
//#include<stack>
//using namespace std;
//class validString {
//	string binary;
//public:
//	void input()
//	{
//		int count = 0;
//		bool flag = false;
//		while (flag==false)
//		{
//			cout << "Enter your string (ONLY 1 OR 0) \n";
//			cin >> binary;
//			while (binary[count] != '\0')
//			{
//				if (binary[count] != '1' && binary[count] != '0')
//				{
//					cout << "Enter a valid input\n";
//					binary[count] = '\0';
//					flag = false;
//				}
//				else if (binary[count] == '1' || binary[count] == '0')
//				{
//					count++;
//					flag = true;
//				}
//			}
//			
//		}
//		
//	}
//	bool check()
//	{
//		stack<char> s;
//		int count = 0;
//		bool flag = false;
//		if (binary[0] == '1')
//			return false;
//		for (int i = 0; binary[i] != '\0'; i++)
//		{
//			if (binary[i] == '0')
//			{
//				flag = false;
//				s.push(binary[i]);
//			}
//			else
//			{
//				if (flag == false)
//				{
//					if (binary[i] == '1' && !s.empty())
//						s.pop();
//					else if (binary[i] == '0')
//						s.push(binary[i]);
//					else
//						continue;
//				}
//			}
//		}
//		if (s.empty())
//			return true;
//		//else
//			return false;
//	}
//};
//int main()
//{
//	validString obj;
//	obj.input();
//	if (obj.check())
//		cout << "String is valid\n";
//	else
//		cout << "String is invalid\n";
//	return 0;
//}
