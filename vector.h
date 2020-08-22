#include<iostream>
using namespace std;
struct vector
{
	float a[100];
	int n;
};
void empty_v(vector& v);
void create_n_v(vector& v, int m);
void create_v_array(vector& v, float a[], int m);
void create_coppy(vector& v, vector c);
void input_vector(vector& v);
void output_vector(vector v);
void add_vector(vector v, vector b);
void vector_multiply_realnumber(vector v, float k);
void dot_product(vector v, vector b);
