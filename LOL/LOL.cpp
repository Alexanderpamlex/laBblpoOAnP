#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int q, w, e, r, t;
	bool DAV ;
	const int SIZE = 5;
	int mass[SIZE];
	// naznach mass
	for (int i = 0; i < SIZE; i++)
	{
		mass[i] = rand() % 10;
	}

	for (int i = 0; i < SIZE; )
	{
		DAV = true;
		int newval = rand() % 10;
		for (int j = 0; j < SIZE; j++) 
		{

			if (mass[j] == newval) { DAV = false; break; }
		}
		if (DAV) { mass[i] = newval; i++; }
	}
	cout << "---------------------Before---------------------" << endl;
	for (int i = 0; i < SIZE; i++) { cout << mass[i] << endl; }

	
	int minv;

	for (int j = 0; j < SIZE-1; j++)
	{
		if (mass[j] > mass[j + 1]) { minv = mass[j + 1]; mass[j + 1] = mass[j]; mass[j] = minv;  }
		for (int j = 0; j < SIZE-1; j++)
		{
			if (mass[j] > mass[j + 1]) { minv = mass[j + 1]; mass[j + 1] = mass[j]; mass[j] = minv;  }
		}
	}
	cout << "---------------------After---------------------" << endl;
	for (int i = 0; i < SIZE; i++) { cout << mass[i] << endl; }
}