#pragma once
#include"common.h"
//����ṹ��
struct AccountItem
{
	string itemType;//ѡ��ķ�������
	int amount;//���������򵥶���Ϊ����
	string detail;//�ı�����
};

//�����Ŀ���ݽ��в����ĺ���

//������Ŀ����
void loadDataFromFile(vector<AccountItem>& items);

//����
void accounting(vector<AccountItem>& items);
void insertIntoFile(const AccountItem& item);
void income(vector<AccountItem>& items);
void expand(vector<AccountItem>& items);

//��ѯ
void query(const vector<AccountItem>& items);//����Ҫ�䣬ֱ��const
void queryItems(const vector<AccountItem>& items);
void queryItems(const vector<AccountItem>& items, const string itemType);
void printItem(const AccountItem& item);