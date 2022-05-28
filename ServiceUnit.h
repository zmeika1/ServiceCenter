#pragma once
/*
Класс "заявка на обслуживание"
*/
using namespace System;
using namespace System::IO;
//управляемый класс, который может потом использоваться любой .Net–сборкой

public ref class ServiceUnit
{
	String^ autoNumber; //Номер автомобиля
	DateTime startDate; //Дата оформления заявки
	DateTime deadLineDate; //Дата окончания заявки
	bool managed; //Отметка о выполнении
	String^ description; //Описание проблемы
	String^ master; //Отвественный за работу
	
public:
	//конструктор по умолчанию(пустой заявки)
	ServiceUnit()
	{
		autoNumber = "";
		startDate = DateTime::Now.Date;
		deadLineDate = DateTime::Now.Date.AddDays(7);
		managed = false;
		description = "";
		master = "Не назначен";
	}
	//Конструктор для чтения из потока данных
	ServiceUnit(StreamReader^ stream) :ServiceUnit()
	{
		Load(stream);
	}
	//Само Чтение
	void Load(StreamReader^ stream)
	{
		autoNumber = stream->ReadLine();//Номер автомобиля
		startDate = DateTime::Parse(stream->ReadLine()); //Дата оформления заявки
		deadLineDate = DateTime::Parse(stream->ReadLine()); //Дата окончания заявки
		managed = bool::Parse(stream->ReadLine()); //Отметка о выполнении
		description = stream->ReadLine(); //Описание проблемы
		master = stream->ReadLine(); //Отвественный за работу
	}
	//Сохранить в поток данных
	void Save(StreamWriter^ stream)
	{
		stream->WriteLine(autoNumber);//Номер автомобиля
		stream->WriteLine(startDate); //Дата оформления заявки
		stream->WriteLine(deadLineDate); //Дата окончания заявки
		stream->WriteLine(managed); //Отметка о выполнении
		stream->WriteLine(description); //Описание проблемы
		stream->WriteLine(master); //Отвественный за работу
	}
	//Представить в виде строки
	String^ ToString() override
	{
		String^ result = "";
		result += "Госномер " + autoNumber;
		result += " Заявка принята " + startDate.ToString("dd.MM.yyyy");
		if (managed) result += " Исполнена ";
		else result += " Закончить к " + deadLineDate.ToString("dd.MM.yyyy");
		if (master != "") result += " Мастер " + master;
		result += " Описание неполадки " + description;
		return result;
	}

	//Свойства
	//Свойства обеспечивают доступ к скрытым (private) полям данных. 
	//Обращение «извне» выглядит как обращение к полю, но на самом деле вызываются методы get при чтении и set при записи. 

	property  String^ AutoNumber//Номер автомобиля
	{
		String^ get(){ return autoNumber; }
		void set(String^ value) {autoNumber = value;}
	}

	property  DateTime StartDate //Дата оформления заявки
	{
		DateTime get() { return startDate; }
		void set(DateTime value) { startDate = value; }
	}

	property  DateTime DeadLineDate //Дата окончания заявки
	{
		DateTime get() { return deadLineDate; }
		void set(DateTime value) { deadLineDate = value; }
	}

	property  bool Managed //Отметка о выполнении
	{
		bool get() { return managed; }
		void set(bool value) { managed = value; }
	}

	property  String^ Description //Описание проблемы
	{
		String^ get() { return description; }
		void set(String^ value) { description = value; }
	}

	property  String^ Master //Отвественный за работу
	{
		String^ get() { return master; }
		void set(String^ value) { master = value; }
	}


};

