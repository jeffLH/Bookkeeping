#include"common.h"

//�����ȡ��������ĺ�����������ȡ�˵�ѡ�񡢶�ȡ����Ľ��������ȡȷ���˳���Ϣ
//��������кϷ���У�飬������ȷ��ֵ

//�����ȡ��������Ķ�ȡ�˵�ѡ�񣬽��кϷ���У��
char readMenuSelection(int option)
{
	string str;

	while (true)
	{
		getline(cin, str);

		//���кϷ���У��
		if (str.size() != 1 || str[0] - '0' <= 0 || str[0] - '0' > option)
			cout << "�������������ѡ��";
		else
			break;
	}

	//����Ϸ�
	return str[0];
}

//��ȡȷ���˳���Ϣ�������кϷ��Լ���
char readQuitConfirm()
{
	string str;

	while (true)
	{
		getline(cin, str);

		//���кϷ���У��
		if (str.size() != 1 || toupper(str[0]) != 'Y' && toupper(str[0]) != 'N')
			cout << "����������������루Y/N����";
		else
			break;
	}

	//����Ϸ�
	return toupper(str[0]);
}

//��ȡ��������Ľ������Ϸ���У��
int readAmount()
{
	int amount;
	string str;

	while (true)
	{
		getline(cin, str);

		//���кϷ���У��
		try//�����
		{
			amount = stoi(str);//str ת int
			break;
		}
		catch (invalid_argument e)
		{
			cout << "�����������ȷ�������֣�";
		}
	}

	//����Ϸ�
	return amount;
}