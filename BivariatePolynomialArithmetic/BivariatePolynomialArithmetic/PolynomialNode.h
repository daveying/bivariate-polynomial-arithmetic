#pragma once
#include <string>
#include <vector>
using namespace std;

class PolynomialNode
{
public:
	//PolynomialNode(int nodeOrder) :order(nodeOrder) {}
	PolynomialNode(int nodeOrder, string vname) :order(nodeOrder), variableName(vname) {}
	int order;		// the order of the node
	string variableName;

	virtual void Print(bool flag) = 0;

	// these are needed for sort() function
	bool operator<(const PolynomialNode &second)  
	{
		int rel = this->Compare(*this, second);
		if (rel == -1)
			return true;
		else
			return false;
	}
	bool operator>(const PolynomialNode &second)
	{
		int rel = this->Compare(*this, second);
		if (rel == 1)
			return true;
		else
			return false;
	}
	bool operator==(const PolynomialNode &second)
	{
		int rel = this->Compare(*this, second);
		if (rel == 0)
			return true;
		else
			return false;
	}

private:
	//if order of first > order of second, return  1
	//if order of first < order of second, return -1
	//if order of first = order of second, return  0
	int Compare(const PolynomialNode &first, const PolynomialNode &second)
	{
		if (first.order > second.order)
			return 1;
		if (first.order < second.order)
			return -1;
		if (first.order == second.order)
			return 0;
	}
};



