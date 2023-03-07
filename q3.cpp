//#include<iostream>
//using namespace std;
//int const col = 9;
//int const row = 9;
//
//class puzzle {
//private:
//	char** board;
//	int* arr;
//public:
//	puzzle()
//	{
//		arr = new int[9];
//		board = new char* [row];
//		for (int i = 0; i < row; i++)
//			board[i] = new char[col];
//		setter();
//	}
//	void setter()
//	{
//		for (int j=1, i = 49; i <= 57; i++,j++)
//			arr[j] = i;
//
//		char grid[row][col] = { 
//			{'5','3','.','.','7','.','.','.','.'},
//			{'6','.','.','1','9','5','.','.','.'},
//			{'.','9','8','.','.','.','.','6','.'},
//			{'8','.','.','.','6','.','.','.','3'},
//			{'4','.','.','8','.','3','.','.','1'},
//			{'7','.','.','.','2','.','.','.','6'},
//			{'.','6','.','.','.','.','2','8','.'},
//			{'.','.','.','4','1','9','.','.','5'},
//			{'.','.','.','.','8','.','.','7','9'}
//		};
//	
//		
//		for (int i = 0; i < row; i++)
//			for (int j = 0; j < col; j++)
//				board[i][j] = grid[i][j];
//
//		cout << "The unsolved grid is: \n";
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//				cout << board[i][j] << " ";
//			cout << endl;
//		}
//
//	}
//	
//	bool existInrow(int r, int num)
//	{
//		for (int i = 0; i < col; i++)
//		{
//			if (board[r][i] == num)
//				return true;
//		}
//		return false;
//	}
//	void print()
//	{
//		cout << endl;
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//				cout << board[i][j] << " ";
//			cout << endl;
//		}
//
//	}
//	bool existInCol(int c, int num)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			if (board[i][c] == num)
//				return true;
//		}
//		return false;
//	}
//	bool existInbox(int r, int c, int num)
//	{
//		if (r == 1 || r == 4 || r == 7)
//			r--;
//		else if (r == 2 || r == 5 || r == 8)
//			r = r - 2;
//
//		if (c == 1 || c == 4 || c == 7)
//			c--;
//		else if (c == 2 || c == 5 || c == 8)
//			c = c - 2;
//
//		for (int i = 0; i < 3; i++)
//			for (int j = 0; j < 3; j++)
//				if (board[i+r][j + c] == num)
//					return true;
//		return false;
//	}
//
//	bool EmptyCell(int& r,int& c)
//	{
//		for (r = 0; r < row; r++)
//			for (c = 0; c < col; c++)
//				if (board[r][c] == '.')
//					return true;
//		return false;
//	}
//	
//	bool Valid(int r,int c,int num)
//	{
//		EmptyCell(r, c);
//		if (!existInbox(r, c, num))
//		{
//			if (!existInCol(c, num))
//			{
//				if (!existInrow(r, num))
//					return true;
//			}
//		}
//		if (existInbox(r, c, num))
//		{
//			if (existInCol(c, num))
//			{
//				if (existInrow(r, num))
//					return false;
//
//			}
//		}
//	}
//	bool sudoko()
//	{
//		int row = 0, col = 0;
//		if (!EmptyCell(row, col))
//		{
//			return true;
//		}
//		for (int count = 1; count < 10; count++)
//		{
//			if (Valid(row, col, arr[count]))
//			{
//				board[row][col] = arr[count];
//
//				if (sudoko())
//					return true;
//
//				board[row][col] = '.';
//			}
//		}
//
//		return false;
//
//	}
//	
//};
//int main()
//{
//	puzzle obj;
//	obj.sudoko();
//	cout << "\nThe solved grid is: ";
//	obj.print();
//	return 0;
//}