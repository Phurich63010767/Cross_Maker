#include<iostream>
using namespace std;

void cross(int x, int s)
{
	int w[2] = { s,1 };
	int* p1 = &w[0];
	int* p2 = &w[1];
	int e = 0, i = 0;
	int e1;
	if (x > 1)
	{
		while (*p1 > 0)
		{
			e1 = 0;
			while (e1 < e)
			{
				cout << " ";
				e1++;
			}
			i = 0;
			cout << "*";
			while (i < *p1)
			{
				cout << " ";
				i++;
			}
			cout << "*" << endl;
			*p1 = *p1 - 2;
			e++;
		}
		e1 = 0;
		while (e1 < e)
		{
			cout << " ";
			e1++;
		}
		cout << "*" << endl;
		e--;
		while (*p2 <= s)
		{
			e1 = 0;
			while (e1 < e)
			{
				cout << " ";
				e1++;
			}
			i = 0;
			cout << "*";
			while (i < *p2)
			{
				cout << " ";
				i++;
			}
			cout << "*" << endl;
			*p2 = *p2 + 2;
			e--;
		}
	}
}

int main()
{
START:
	int x;
	cout << "Enter number: ";
	cin >> x;
	int s = ((x - 1) * 2) - 1;

	if (x == 1)
	{
		cout << "*";
	}
	if (x < 1)
	{
		cout << "Can't enter number below 1." << endl;
		system("pause");
		system("CLS");
		goto START;
	}
	cross(x, s);

	return 0;
}