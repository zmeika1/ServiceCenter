#pragma once
/*
Класс "список заявок на ремонт автомобилей"
*/
#include "ServiceUnit.h"
using namespace System; //String и другие
using namespace System::IO; //Stream
using namespace System::Collections::Generic; //List

ref class AutoList
{
	List<ServiceUnit^>^ list;
public:

	//Конструктор по умолчанию
	AutoList()
	{
		list = gcnew List<ServiceUnit^>();
	}

	//Конструктор "из потока"
	AutoList(StreamReader^ stream) :AutoList()
	{
		Load(stream);
	}

	//Загрузить
	void Load(StreamReader^ stream)
	{
		while (!stream->EndOfStream)
		{	//Зная, что должно храниться в списке – создать и пусть себя загрузит
			ServiceUnit^ su = gcnew ServiceUnit(stream);
			list->Add(su);
		}
	}

	//Сохранить
	void Save(StreamWriter^ stream)
	{
		for each (ServiceUnit^ su in list)
			su->Save(stream);
	}
	//Все дальнейшие методы – просто «передают» запросы к стандартному компоненту List
	//Размер
	int Count() { return list->Count; }
	//Индексатор
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

