#include"common.h"

//定义读取键盘输入的函数，包括读取菜单选择、读取输入的金额数、读取确认退出信息
//对输入进行合法性校验，返回正确的值

//定义读取键盘输入的读取菜单选择，进行合法性校验
char readMenuSelection(int option)
{
	string str;

	while (true)
	{
		getline(cin, str);

		//进行合法性校验
		if (str.size() != 1 || str[0] - '0' <= 0 || str[0] - '0' > option)
			cout << "输入错误，请重新选择：";
		else
			break;
	}

	//输出合法
	return str[0];
}

//读取确认退出信息，并进行合法性检验
char readQuitConfirm()
{
	string str;

	while (true)
	{
		getline(cin, str);

		//进行合法性校验
		if (str.size() != 1 || toupper(str[0]) != 'Y' && toupper(str[0]) != 'N')
			cout << "输入错误，请重新输入（Y/N）：";
		else
			break;
	}

	//输出合法
	return toupper(str[0]);
}

//读取键盘输入的金额，并作合法性校验
int readAmount()
{
	int amount;
	string str;

	while (true)
	{
		getline(cin, str);

		//进行合法性校验
		try//差错处理
		{
			amount = stoi(str);//str 转 int
			break;
		}
		catch (invalid_argument e)
		{
			cout << "输入错误，请正确输入数字：";
		}
	}

	//输出合法
	return amount;
}