#include "myDereived.h"

int myDereived::addSomething(int initValue) {
	return initValue + 100 + myBase::addSomething(11);
}