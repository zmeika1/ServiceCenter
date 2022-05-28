#pragma once
/*
����� "������ ������ �� ������ �����������"
*/
#include "ServiceUnit.h"
using namespace System; //String � ������
using namespace System::IO; //Stream
using namespace System::Collections::Generic; //List

ref class AutoList
{
	List<ServiceUnit^>^ list;
public:

	//����������� �� ���������
	AutoList()
	{
		list = gcnew List<ServiceUnit^>();
	}

	//����������� "�� ������"
	AutoList(StreamReader^ stream) :AutoList()
	{
		Load(stream);
	}

	//���������
	void Load(StreamReader^ stream)
	{
		while (!stream->EndOfStream)
		{	//����, ��� ������ ��������� � ������ � ������� � ����� ���� ��������
			ServiceUnit^ su = gcnew ServiceUnit(stream);
			list->Add(su);
		}
	}

	//���������
	void Save(StreamWriter^ stream)
	{
		for each (ServiceUnit^ su in list)
			su->Save(stream);
	}
	//��� ���������� ������ � ������ ��������� ������� � ������������ ���������� List
	//������
	int Count() { return list->Count; }
	//����������
	ServiceUnit^ operator [](int index)
	{
		return list[index];
	}

	void Add(ServiceUnit^ su)
	{
		list->Add(su);
	}

	void Remove(ServiceUnit^ su)
	{
		list->Remove(su);
	}

};

