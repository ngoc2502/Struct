#include<iostream>
#include"circle.h"

constexpr auto maxlenth = 100;;
using namespace std;

int main()
{
	circle k[maxlenth];
	int n=0,m=0;
	cout << "enter the number of circle: ";
	cin >> n;
	input_cicle_array(k, n);
	cout << "Enter the function you want to perform: \n"
		<< "1. Output an array of circles\n"
		<< "2. Finding out the circle having the biggest perimeter\n"
		<< "3. Caculating the total of area circles\n"
		<< "4. Counting the number of circle whose area bigger than the average area\n"
		<< "5. Sorting the array of circles down follow the perimeter\n";
	cin >> m;
	switch (m)
	{
	case 1:
	{
		output_cicle_array(k, n);
		break;
	}
	case 2:
	{
		biggest_perimeter_circle(k, n);
		break;
	}
	case 3:
	{
		float sum = sum_area_circle(k, n);
		cout << sum;
		break;
	}
	case 4:
	{
		int count = count_circle_over_a(k, n);
		cout << count;
		break;
	}
	case 5:
	{
		sort_circle_per(k, n);
		output_cicle_array(k, n);
		break;
	}
	}
	return(0);
}