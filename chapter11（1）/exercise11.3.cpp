#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vector.h"
#include <vector>
const int NNumber = 5;
int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	std::cout << "Enter target distance(q to exit): ";
	while (std::cin >> target)
	{
		std::cout << "Enter step length: ";
		if (!(std::cin >> dstep))
			break;
		vector<double> vec;
		for (int i = 0; i < NNumber; i++)
		{
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				++steps;
			}
			vec.push_back(result.magval() / steps);
			steps = 0;
			result.reset(0.0, 0.0);
		}
		double max = vec[0], min = vec[0];
		for (int i = 0; i < NNumber; i++)
		{
			if (max < vec[i])
				max = vec[i];
			if (min > vec[i])
				min = vec[i];
		}
		cout << "max  per step: " << max << endl;
		cout << "min per step: " << min << endl;
		std::cout << "Enter target distance (q to quit): ";
	}
	std::cout << "Bye!\n";
	std::cin.clear();
	while (std::cin.get() != '\n')
		continue;
	return 0;
}
