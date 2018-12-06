//
// Created by 80216435 on 2018/12/5.
//

#ifndef PATTERN_ABSTRACTFACTORY_H
#define PATTERN_ABSTRACTFACTORY_H

/**
 * 抽象的产品A类型，定义出来，就是要用来实现的
 *
 * 虚类，要求覆盖
 */
class AbstractProductA
{
public:
	virtual ~AbstractProductA();
protected:
	AbstractProductA();
private:
};


/**
 * 抽象的产品B类型，定义出来，就是要用来实现的
 *
 * 虚类，要求覆盖
 */
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

/**
 * 纯虚函数：
 * 接口：
 * 	1.创建产品A
 * 	2.创建产品B
 */
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

/*
 * 具体的实现1
 */
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

/*
 * 具体的实现2
 */
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
