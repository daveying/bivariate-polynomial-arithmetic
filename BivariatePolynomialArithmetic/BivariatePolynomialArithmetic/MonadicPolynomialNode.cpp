#include <iostream>
#include "MonadicPolynomialNode.h"

using namespace std;

void MonadicPolynomialNode::Print(bool flag)
{
	if (flag)
	{
		if (this->coefficient > 0 && this->coefficient != 1.0)
			std::cout << this->coefficient;
		if (this->coefficient < 0 && this->coefficient != -1.0)
			std::cout << this->coefficient;
		if (this->coefficient == -1.0)
			std::cout << "-";
	}
	else
	{
		if (this->coefficient > 0)
		{
			if (this->coefficient != 1.0)
				std::cout << " + " << this->coefficient;
			else
			{
				std::cout << " + ";
				if (this->order == 0)
					std::cout << this->coefficient;
			}
		}
		if (this->coefficient < 0)
		{
			if (this->coefficient != -1.0)
				std::cout << " - " << -this->coefficient;
			else
			{
				std::cout << " - ";
				if (this->order == 0)
					std::cout << -this->coefficient;
			}
		}
	}
	if (this->order == 0)
		return;
	cout << this->variableName;
	if (this->order != 1)
		std::cout << "^" << this->order;
}