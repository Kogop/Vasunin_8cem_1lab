#include <iostream>
#include <cmath>
using namespace std;

int N;
//double x = 0.0, y = 0.0;

int main() {
	cin >> N;

	for (long long int y = 2; y < pow(2,8*sizeof(long long int)); y++)
	{
		double temp = sqrt((N * y * y) + 1);
		//for (long long int x = y; x <= sqrt((N * y * y) + 1); x++) {
			if ((int)temp - temp == 0)
			{
				cout << "x = " << temp << " y = " << y << endl;

				break;
			}
		}

	



	return 1;
}


