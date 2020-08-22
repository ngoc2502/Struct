#include<iostream>
#include"vector.h"
using namespace std;

int main()
{
	vector v;
	int n = 0;
	cout << "Enter the function you want to perform:\n"
		<< "1. Creat the empty vector with n components\n"
		<< "2. Creat the vector with k compnents, each one has  zero value\n"
		<< "3. Creat vector from a[] avalable array, n avalable components\n"
		<< "4. Creat a vector from one another\n"
		<< "5. Enter the value for vector\n"
		<< "6. Print the vector on the screen\n"
		<< "7. add vector\n"
		<< "8. Vector mutiply to real number\n"
		<< "9. pot ptoduct of two vector\n";
	cin >> n;
	switch (n)
	{
	case 1:
	{
		empty_v(v);
		break;
	}
	case 2:
	{
		int k;
		cout << "Enter the number of component: ";
		cin >> k;
		create_n_v(v, k);
		output_vector(v);
		break;
	}
	case 3:
	{
		int m;
		float k[100];
		cout << "enter the number of component: ";
		cin >> m;
		cout << "Enter the value of array: ";
		for (int i = 0; i < m; i++)
		{
			cin >> k[i];
		}
		create_v_array(v, k, m);
		output_vector(v);
		break;
	}
	case 4:
	{
		vector c;
		cout << "Enter the inital vector! \n";
		input_vector(v);
		cout << "Vector created from inital vector : ";
		create_coppy(c, v);
		output_vector(c);
		break;
	}
	case 5:
	{
		input_vector(v);
		break;
	}
	case 6:
	{
		input_vector(v);
		output_vector(v);
		break;
	}
	case 7:
	{
		vector c;
		cout << "Enter two vectors\n";
		input_vector(v);
		input_vector(c);
		add_vector(v, c);
		break;
	}
	case 8:
	{
		float m;
		cout << "Enter the real number: ";
		cin >> m;
		cout << "Enter the vector\n";
		input_vector(v);
		vector_multiply_realnumber(v, m);
		break;
	}
	case 9:
	{
		vector c;
		cout << "Enter two vectors\n";
		input_vector(v);
		input_vector(c);
		dot_product(v, c);
	}
	}
}