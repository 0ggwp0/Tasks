

#include <iostream>
#include <vector> 
using namespace std;

class _class
{
public:
	
double x = 0;
double y = 0;

	


	_class operator +(const _class & other)
	{
		_class temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;

		return temp;

	}
	_class operator *(const _class & other)
		{
			_class temp2;
			temp2.x = this->x * other.x;
			temp2.y = this->y * other.y;
			return temp2;
		}
	
	_class operator* (double a)
	{
		_class temp3;
		temp3.x = this->x *a;
		temp3.y = this->y *a;
		return temp3;
	}


};




int main()
{
	_class first;
	first.x = 22.2;
	first.y = 44.2;
	_class second;
	second.x = 33.2;
	second.y = 19.2223;
	
	_class resultSum = first + second;
	_class resultMultiplication= first * second;
	_class resultMultiplication_Number=  first * 2;

	cout << "first + second " << "x = " << resultSum.x << " \t y = " << resultSum.y << endl;
	cout << "first * second " << "x = " << resultMultiplication.x << " \t y = " << resultMultiplication.y << endl;
	cout << "first * number " << "x = " << resultMultiplication_Number.x << " \t y = " << resultMultiplication_Number.y << endl;
	return 0;

}