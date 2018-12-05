//
// Created by 80216435 on 2018/12/5.
//

#include <gtest/gtest.h>
#include "AbstractFactory.h"


namespace {
	TEST(A_Test1_Test, Test1) {
		AbstractFactory* cf1 = new ConcreteFactory1();
		delete cf1->CreateProductA();
		delete cf1->CreateProductB();
		delete cf1;

		AbstractFactory* cf2 = new ConcreteFactory2();
		delete cf2->CreateProductA();
		delete cf2->CreateProductB();
		delete cf2;

	}


}