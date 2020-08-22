#include<iostream>
#include "circle.h"

using namespace std;

void input_cicle_array(circle l[], int n)
{
	for (int i = 0; i < n; i++)
	{
		input_circle(l[i]);
	}
}
void output_cicle_array(circle l[], int n)
{
	for (int i = 0; i < n; i++)
	{
		output_circle(l[i]);
	}
	cout << "\n";
}
void biggest_perimeter_circle(circle l[], int n)
{
	float biggest = 0;
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (perimeter_circle(l[i]) >= biggest)
		{
			biggest = perimeter_circle(l[i]);
			index = i;
		}
	}
	output_circle(l[index]);
}
float sum_area_circle(circle l[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += area_circle(l[i]);
	}
	return (sum);
}
int count_circle_over_a(circle l[], int n)// count the number of the circle whose area bigger than the average area
{
	float average = sum_area_circle(l, n) / n;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (area_circle(l[i]) > average) count++;
	}
	return(count);
}
void sort_circle_per(circle l[], int n)// sorting out the circle follow the perimeter 
{
	for (int i=0;i<n-2;i++)
		for (int j = i + 1; j < n; j++)
		{
			if (perimeter_circle(l[i]) < perimeter_circle(l[j]))
			{
				circle temp = l[i];
				l[i] = l[j];
				l[j] = temp;
			}
		}
}