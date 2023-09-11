#include <iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	void init(int a, int b)
	{
		x = rand() % 20;
		y = rand() % 10;
	}
	void init_var(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
	void print()
	{
		cout << x << "\n" << y << endl;
	}
	void setX(int v)
	{
		if (v > 0)
		{
			x = v;
		}
	}
	void setY(int v)
	{
		if (v > 0)
		{
			y = v;
		}
	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	void add(int a)
	{
		x += a;
		y += a;
	}

	point sum(point b)
	{
		point rez;
		rez.x = x + b.x;
		rez.y = y + b.y;
		return rez;
	}
	point roz(point b)
	{
		point rez;
		rez.x = x - b.x;
		rez.y = y - b.y;
		return rez;
	}
	point proiz(point b)
	{
		point rez;
		rez.x = x * b.x;
		rez.y = y * b.y;
		return rez;
	}
	point chast(point b)
	{
		point rez;
		rez.x = x / b.x;
		rez.y = y / b.y;
		return rez;
	}
};
int main()
{
	srand(unsigned(time(NULL)));
	point a;
	a.print();




}


