#pragma once
/*
 *  ����һ����̬��Ҳ�Ǹ��࣬�����У�
 *  1.Boss��
 *  2.manager��
 *  3.employee��
 */

#include <iostream>
using namespace std;
class Worker {
public:
	int Id;       //���
	string Name; //����
	int DeptId;  //ְ�����ڲ��ű��
public:
	virtual void show_All() = 0;        //��ʾ������Ϣ

	virtual string get_DeptName() = 0;  //��ȡ��λ����
};