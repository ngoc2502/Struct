#include<iostream>
constexpr auto pi = 3.14;

using namespace std;

struct coordinate
{
	float x;
	float y;
};

struct circle
{
	float r; //radius
	coordinate c; //center
};

float distance(coordinate a, coordinate b);
void input_point(coordinate& a);
void output_point(coordinate a);

void input_circle(circle &o);
void output_circle(circle o);
float area_circle(circle k);
float perimeter_circle(circle k);

void input_cicle_array(circle l[], int n);
void output_cicle_array(circle l[], int n);
void biggest_perimeter_circle(circle l[], int n);
float sum_area_circle(circle l[], int n);
int count_circle_over_a(circle l[], int n);// count the number of the circle whose area bigger than the average area
void sort_circle_per(circle l[], int n);// sorting out the circle follow the perimeter 


