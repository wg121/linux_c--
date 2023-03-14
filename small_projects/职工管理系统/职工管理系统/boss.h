#pragma once
#include <iostream>
#include "worker.h"
#include <string>

using namespace std;

class Boss :public Worker {
public:
	Boss(int id, string name, int deptid);

	void show_All();

	string get_DeptName();
};