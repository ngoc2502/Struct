#include"vector.h"
void empty_v(vector& v)// creating the empty vector with n components
{
	v.n = 0;
}
void create_n_v(vector &v, int m)//creating the vector with m compnents, each one has  zero value
{
	v.n = m;
	for (int i = 0; i < m; i++)
	{
		v.a[i] = 0;
	}
}
void create_v_array(vector& v, float a[], int m)// creating vector from a[] array, n avalable components
{
	v.n = m;
	for (int i = 0; i < v.n; i++)
	{
		v.a[i] = a[i];
	}
}
void create_coppy(vector& v, vector c)// creating vector v from vector c
{
	v.n = c.n;
	for (int i = 0; i < c.n; i++)
	{
		v.a[i] = c.a[i];
	}
}
void input_vector(vector &v)
{
	cout << "Enter the number of component: ";
	cin >> v.n;
	cout << "Enter the value of each component: ";
	for (int i = 0; i < v.n; i++)
	{
		cin >> v.a[i];
	}
}
void output_vector(vector v)
{
	cout << "( ";
	for (int i = 0; i < v.n; i++)
	{
		cout << v.a[i]<<"  ";
	}
	cout << ")";
}
void add_vector(vector v, vector b)
{
	vector sum;
	sum.a[0] = 0;
	if (v.n != b.n) cout << "warning!";
	else
	{
		sum.n = v.n;
		for (int i = 0; i < v.n; i++)
		{
			sum.a[i] = v.a[i] + b.a[i];
		}
		output_vector(sum);
	}
}
void vector_multiply_realnumber(vector v, float k)
{
	vector resul;
	resul.n = v.n;
	//resul.a[0] = 1;
	for (int i = 0; i < v.n; i++)
	{
		resul.a[i] = v.a[i] * k;
	}
	output_vector(resul);
}
void dot_product(vector v, vector b)
{
	float sum=0;
	if (v.n != b.n) cout << "warning!";
	else
	{
		for (int i = 0; i < v.n; i++)
		{
			sum += v.a[i] * b.a[i];
		}
		cout<< sum;
	}
}