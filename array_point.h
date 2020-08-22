#include <iostream>
#include<math.h>

using namespace std;

struct coor //coordinate
{
	float x;
	float y;
};
void input_point(coor& t);
void output_point(coor t);
bool positive_point(coor t);

void input_point_array(coor a[], int &n);
void output_point_array(coor a[], int n);

float distance(coor n, coor m);
void farthest(coor a[], int n, coor m);
void positive_point_array(coor a[], int n);
void sort_up(coor a[], int n);



