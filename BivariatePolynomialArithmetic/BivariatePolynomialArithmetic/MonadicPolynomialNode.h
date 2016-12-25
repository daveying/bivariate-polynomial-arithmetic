#pragma once
#include "PolynomialNode.h"
using namespace std;

class MonadicPolynomialNode : public PolynomialNode
{
public:
	double coefficient;
	MonadicPolynomialNode *next;
	MonadicPolynomialNode(double nodeCoefficient, int nodeOrder) :PolynomialNode(nodeOrder, ""), coefficient(nodeCoefficient), next(0) {	}
	MonadicPolynomialNode(double nodeCoefficient, int nodeOrder, string vname) :PolynomialNode(nodeOrder, vname), coefficient(nodeCoefficient), next(0) {  }
	MonadicPolynomialNode(const MonadicPolynomialNode &another) :PolynomialNode(another.order, another.variableName), coefficient(another.coefficient), next(0) {  }
	void Print(bool flag);
};