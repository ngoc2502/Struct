#include"array_point.h"
#include<iostream>

using namespace std;

void input_point_array(coor a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		input_point(a[i]);
	}
}
void output_point_array(coor a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		output_point(a[i]);
	}
}
void farthest(coor a[],int n, coor m)
{
	float dismax = 0;
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (distance(a[i], m) >= dismax)
		{
			dismax = distance(a[i],m);
			index = i;
		}
	}
	output_point(a[index]);
	return;
}
void positive_point_array(coor a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (positive_point(a[i]))
			output_point(a[i]);
	}
}
void sort_up(coor a[], int n)
{
	float dismax = 0;
	coor o;
	o.x = 0;
	o.y = 0;
	for (int i = 0; i < n-1; i++)
		for (int j=i+1;j<n;j++)
	{
			if (distance(a[i], o) > distance(a[j], o))
			{
				coor temp = a[i];
				a[i] = a[j];
				a[j] = temp;
		    }
	}
}