
#include <iostream>
using namespace std;

int main()
{
	//задание 1
	{
		int a, b, c, d;
		a = 5;
		b = 4;
		c = 88;
		d = 1488;
		float f = (a * (b + (float(c) / d)));
		cout << f << endl;
	}

	//задание 2
	{
		int a = 6, pp;
		pp = (a <= 21) ? (21 - a) : 2 * (a - 21);
		cout << pp << endl;	
	}

	//задание 3
	{
		const int serafim = 3;
		int Array[serafim][serafim][serafim];
		for (int x = 0; x < serafim; x++) {
			for (int y = 0; y < serafim; y++) {
				for (int z = 0; z < serafim; z++) {
					Array[x][y][z] = (x + 1) + (y + 1) + (z + 1);
				}
			}
		}
		int* pArr = nullptr;
		pArr = &Array[1][1][1];
		cout << Array[1][1][1] << endl;
	}

	//задание 4
	{
		extern const int a;
		extern const int b;
		extern const int c;
		extern const int d;
		float f = a * (b + (float(c) / d));
		cout << f << endl;
	}
	return 0;
}