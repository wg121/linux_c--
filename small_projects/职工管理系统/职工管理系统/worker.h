#pragma once
/*
 *  这是一个多态，也是父类，子类有：
 *  1.Boss类
 *  2.manager类
 *  3.employee类
 */

#include <iostream>
using namespace std;
class Worker {
public:
	int Id;       //编号
	string Name; //姓名
	int DeptId;  //职工所在部门编号
public:
	virtual void show_All() = 0;        //显示所有信息

	virtual string get_DeptName() = 0;  //获取岗位名称
};