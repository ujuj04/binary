#include <iostream>
using namespace std;

#include "ft_straight.h"
#include "ft_reverse.h"
#include "ft_additional.h"

int main()
{
	int a;
	cin >> a;
	long long b, c;

	if (a > 0)
	{
		cout << "Chislo v pryamom vide: ";
		ft_straight(a);
	}

	else if (a < 0)
	{
		cout << "Chislo v pryamom vide: " << ft_straight(a) << endl;
		b = ft_straight(a);
		cout << "Chislo v obratnom vide: " << ft_reverse(b) << endl;
		c = ft_reverse(b);
		cout << "Chislo v dovolnitelnom vide: " << ft_additional(c);
	}
	else if (a == 0)
	{
		cout << "0";
	}
}