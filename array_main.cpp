#include <iostream>
#include"array_point.h"

#define maxlength 200

using  namespace std;

int main()
{
	coor  a[maxlength];
	int n=0,m=0;

	cout << "Enter the function you want to perform\n"
		<< "1. Enter and print the resul on the screen\n"
		<< "2. Enter a A point and find out the farthest point in array\n"
		<< "3. list the points have positive coordinate\n"
		<< "4. sort out array up follow the distance to original coordinate\n";
	cin >> m;
	switch (m)
	{
	case 1:
	{
		cout << "Enter the number of element: ";
		cin >> n;
		input_point_array(a, n);
		output_point_array(a, n);
		break;
	}
	case 2:
	{
		coor k;
		cout << "Enter the number of element: ";
		cin >> n;
		input_point_array(a, n);
		cout << "Enter the point wantting to check\n";
		input_point(k);
		farthest(a, n, k);
		break;
	}
	case 3:
	{
		cout << "Enter the number of element: ";
		cin >> n;
		input_point_array(a, n);
		positive_point_array(a, n);
		break;
	}
	case 4:
	{
		cout << "Enter the number of element: ";
		cin >> n;
		input_point_array(a, n);
		sort_up(a, n);
		output_point_array(a, n);
	}
	}
	return 0;
}