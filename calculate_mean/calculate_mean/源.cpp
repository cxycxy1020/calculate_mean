#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,i,sum_p=0;
	float e=0;
	cin >> n;
	int *x=new int[n],*p=new int[n];
	
	while (sum_p != 100)
	{
		cout << "input again" << endl;
		for (i = 0; i < n; i++)
		{
			cin >> x[i] >> p[i];
			if (x[i] < (-100) || x[i]>100)
				cin >> x[i];
			if (p[i] < 0 ||p[i]>100)
				cin >> p[i];
			sum_p += p[i];
		}
		for (i = 0; i < n; i++)
		{
			cout << "input result:" << endl;
			cout << x[i] << " " << p[i] << endl;
		}

	}
	for(i=0;i<n;i++)
	{
		e += x[i] * p[i] / (float)100;
	}
	cout << fixed << setprecision(3) << e << endl;
}