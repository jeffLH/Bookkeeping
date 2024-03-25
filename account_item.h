#pragma once
#include"common.h"
//定义结构体
struct AccountItem
{
	string itemType;//选择的服务类型
	int amount;//输入金额，这里简单定义为整数
	string detail;//文本表述
};

//针对账目数据进行操作的函数

//加载账目数据
void loadDataFromFile(vector<AccountItem>& items);

//记账
void accounting(vector<AccountItem>& items);
void insertIntoFile(const AccountItem& item);
void income(vector<AccountItem>& items);
void expand(vector<AccountItem>& items);

//查询
void query(const vector<AccountItem>& items);//不需要变，直接const
void queryItems(const vector<AccountItem>& items);
void queryItems(const vector<AccountItem>& items, const string itemType);
void printItem(const AccountItem& item);