//
// Created by 80216435 on 2018/12/5.
//

#ifndef PATTERN_ABSTRACTFACTORY_H
#define PATTERN_ABSTRACTFACTORY_H


class AbstractProductA
{
public:
	virtual ~AbstractProductA();
protected:
	AbstractProductA();
private:
};

class AbstractProductB
{
public:
	virtual ~AbstractProductB();
protected:
	AbstractProductB();
private:
};

class ProductA1:public AbstractProductA
{
public:
	ProductA1();
	~ProductA1();
protected:
};

class ProductA2:public AbstractProductA
{
public: ProductA2();
	~ProductA2();
protected:
private:
};

class ProductB1:public AbstractProductB
{
public:
	ProductB1();
	~ProductB1();
protected:
private:
};

class ProductB2:public AbstractProductB
{
public:
	ProductB2();
	~ProductB2();
protected:
private:
};

class AbstractFactory
{
public:
	virtual ~AbstractFactory();
	virtual AbstractProductA* CreateProductA() = 0;
	virtual AbstractProductB* CreateProductB() = 0;
protected:
	AbstractFactory();
private:
};

class ConcreteFactory1:public AbstractFactory
{
public:
	ConcreteFactory1();
	~ConcreteFactory1();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
protected:
private:
};

class ConcreteFactory2:public AbstractFactory
{
public:
	ConcreteFactory2();
	~ConcreteFactory2();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
protected:
private:
};


#endif //PATTERN_ABSTRACTFACTORY_H
