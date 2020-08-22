#include<iostream>
#include "circle.h"

using namespace std;

void input_point(coordinate& a)
{
	cout << "x= ";
	cin >> a.x;
	cout << "y= ";
	cin >> a.y;
}
void output_point(coordinate a)
{
	cout << "(" << a.x << "," << a.y << ")";
}
float distance(coordinate a, coordinate b)
{
	return(sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y)));
}

void input_circle(circle &o)
{
	cout << "enter the length of the radius: \n";
	cin>>o.r;
	cout << "enter the coordinate of the center: \n";
	input_point(o.c);
}
void output_circle(circle o)
{
	if (o.r == 0) cout << "enter again!";
	else
	{
		cout <<"("<< o.r << "(" << o.c.x << "," << o.c.y << "))";
	}
}

float area_circle(circle k)
{
	return (3.14* k.r*k.r);
}
float perimeter_circle(circle k)
{
	return (3.14 * k.r *2);
}
