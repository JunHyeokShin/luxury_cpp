#include "Exp.h"

Exp::Exp() : Exp(1, 1) { }

Exp::Exp(int a) : Exp(a, 1) { }

Exp::Exp(int a, int b) {
	base = a;
	exp = b;
}

int Exp::getValue() {
	int result = base;
	for (int i = 1; i < exp; i++)
		result *= base;
	return result;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exp;
}

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue())
		return true;
	else
		return false;
}
