#pragma once
/*
����� "������ �� ������������"
*/
using namespace System;
using namespace System::IO;
//����������� �����, ������� ����� ����� �������������� ����� .Net��������

public ref class ServiceUnit
{
	String^ autoNumber; //����� ����������
	DateTime startDate; //���� ���������� ������
	DateTime deadLineDate; //���� ��������� ������
	bool managed; //������� � ����������
	String^ description; //�������� ��������
	String^ master; //������������ �� ������
	
public:
	//����������� �� ���������(������ ������)
	ServiceUnit()
	{
		autoNumber = "";
		startDate = DateTime::Now.Date;
		deadLineDate = DateTime::Now.Date.AddDays(7);
		managed = false;
		description = "";
		master = "�� ��������";
	}
	//����������� ��� ������ �� ������ ������
	ServiceUnit(StreamReader^ stream) :ServiceUnit()
	{
		Load(stream);
	}
	//���� ������
	void Load(StreamReader^ stream)
	{
		autoNumber = stream->ReadLine();//����� ����������
		startDate = DateTime::Parse(stream->ReadLine()); //���� ���������� ������
		deadLineDate = DateTime::Parse(stream->ReadLine()); //���� ��������� ������
		managed = bool::Parse(stream->ReadLine()); //������� � ����������
		description = stream->ReadLine(); //�������� ��������
		master = stream->ReadLine(); //������������ �� ������
	}
	//��������� � ����� ������
	void Save(StreamWriter^ stream)
	{
		stream->WriteLine(autoNumber);//����� ����������
		stream->WriteLine(startDate); //���� ���������� ������
		stream->WriteLine(deadLineDate); //���� ��������� ������
		stream->WriteLine(managed); //������� � ����������
		stream->WriteLine(description); //�������� ��������
		stream->WriteLine(master); //������������ �� ������
	}
	//����������� � ���� ������
	String^ ToString() override
	{
		String^ result = "";
		result += "�������� " + autoNumber;
		result += " ������ ������� " + startDate.ToString("dd.MM.yyyy");
		if (managed) result += " ��������� ";
		else result += " ��������� � " + deadLineDate.ToString("dd.MM.yyyy");
		if (master != "") result += " ������ " + master;
		result += " �������� ��������� " + description;
		return result;
	}

	//��������
	//�������� ������������ ������ � ������� (private) ����� ������. 
	//��������� ������ �������� ��� ��������� � ����, �� �� ����� ���� ���������� ������ get ��� ������ � set ��� ������. 

	property  String^ AutoNumber//����� ����������
	{
		String^ get(){ return autoNumber; }
		void set(String^ value) {autoNumber = value;}
	}

	property  DateTime StartDate //���� ���������� ������
	{
		DateTime get() { return startDate; }
		void set(DateTime value) { startDate = value; }
	}

	property  DateTime DeadLineDate //���� ��������� ������
	{
		DateTime get() { return deadLineDate; }
		void set(DateTime value) { deadLineDate = value; }
	}

	property  bool Managed //������� � ����������
	{
		bool get() { return managed; }
		void set(bool value) { managed = value; }
	}

	property  String^ Description //�������� ��������
	{
		String^ get() { return description; }
		void set(String^ value) { description = value; }
	}

	property  String^ Master //������������ �� ������
	{
		String^ get() { return master; }
		void set(String^ value) { master = value; }
	}


};

