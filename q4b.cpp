#include<iostream>
#include<vector>
#include<queue>
#include<ctime>
#include<Windows.h>
using namespace std;
class receiver {
private:
	vector<queue<int>> sqn;
	int rid = 0;
public:
	receiver()
	{
		sqn.push_back(queue<int>());
		sqn.push_back(queue<int>());
		sqn.push_back(queue<int>());
		sqn.push_back(queue<int>());
		sqn.push_back(queue<int>());
		cout << sqn.size() << endl;
	}
	void addRequestForResources(int rid, int reqno)
	{
		sqn[rid].push(reqno);
		this->rid = rid;
	}
	void serviceRequestAtRecources(int rid)
	{
		if (!sqn[rid].empty())
		{
			sqn[rid].pop();
		}

	}
	void servicesRate()
	{
		int count = 0, data = 0, ID = 0, addReqTime = 0, servingTime = 0, QsCount = 5, printCount = 0, serviceCount = 0;
		srand(time(0));

		int QsService[5], record[5];
		while (true)
		{
			while (count <= 100)
			{
				data = 1 + (rand() % 500);

				ID = (rand() % 5);
				addRequestForResources(ID, data);
				count++;
			}
			if (count == 101)
			{
				cout << "Queues are:\n";
				printQueues();

				for (int i = 0; i < QsCount; i++)
				{
					cout << "Enter the servicing rate for Queue " << i << " ";
					cin >> QsService[i];
					record[i] = QsService[i];
				}
			}

			if (count > 101)
			{

				for (int i = 0; i < QsCount; i++)
				{
					QsService[i]--;
					if (QsService[i] == 0)
					{
						serviceRequestAtRecources(i);
						QsService[i] = record[i];
					}
				}
				addReqTime++;
			}
			bool flag = false;

			for (int i = 0; i < QsCount; i++)
			{
				if (!sqn[i].empty())
				{
					flag = true;
				}
			}
			if (printCount == 250)
			{
				cout << "Queues after 250ms\n";
				system("CLS");
				printQueues();
				printCount = 0;
			}
			if (flag == false)
				return;
			if (addReqTime == 500)
			{
				addReqTime = 0;
				ID = (rand() % 5);
				cout << "Add requests \nTo end the loop, press 0";
				cin >> data;
				if (data == 0)
					return;
				addRequestForResources(ID, data);
			}
			count++;
			printCount++;
			Sleep(1);

		}

	}
	void printQueues()
	{
		int size = sqn.size();
		vector<queue<int>> temp;
		temp = sqn;
		for (int i = 0; i < size; i++)
		{
			cout << "QUEUE NO.:" << i << "\n";
			while (!temp[i].empty())
			{
				cout << temp[i].front() << " ";
				temp[i].pop();
			}
			cout << endl;
		}
		cout << endl;
	}
};
int main()
{
	receiver obj;

	obj.servicesRate();
	system("CLS");
	obj.printQueues();
	return 0;
}