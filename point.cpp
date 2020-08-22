#include "triangle.h"
#include <math.h>

using namespace std;

void input_point(coordinate &a)
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

