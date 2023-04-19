#pragma once
#include "myBase.h"

 class myDereived : public myBase
{
public:
	int addSomething(int initValue) {

	}
	int subSomething(int initValue) {
		return initValue - 42;
	}
};

