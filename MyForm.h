#pragma once

#include "AutoList.h"
#include "ServiceUnit.h"
#include "FormCard.h"


namespace ServiceCenter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// //управляемый класс, который может потом использоваться любой .Net–сборкой

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  buttonEdit;
	private: System::Windows::Forms::Button^  buttonMark;
	protected:

	protected:



	private: System::Windows::Forms::Button^  buttonRemove;

	private: System::Windows::Forms::ComboBox^  comboBoxMaster;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBoxDescription;
	private: System::Windows::Forms::ComboBox^  comboBoxType;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;



	private: System::Windows::Forms::ComboBox^  comboBoxNumber;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::CheckBox^  checkBoxUseDate;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonEdit = (gcnew System::Windows::Forms::Button());
			this->buttonMark = (gcnew System::Windows::Forms::Button());
			this->buttonRemove = (gcnew System::Windows::Forms::Button());
			this->comboBoxMaster = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxDescription = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxType = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBoxNumber = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->checkBoxUseDate = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// listBox
			// 
			this->listBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox->FormattingEnabled = true;
			this->listBox->ItemHeight = 20;
			this->listBox->Location = System::Drawing::Point(12, 198);
			this->listBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(1243, 444);
			this->listBox->TabIndex = 0;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(15, 25);
			this->buttonAdd->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(244, 35);
			this->buttonAdd->TabIndex = 1;
			this->buttonAdd->Text = L"Зарегистрировать заявку";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonEdit
			// 
			this->buttonEdit->Location = System::Drawing::Point(288, 25);
			this->buttonEdit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonEdit->Name = L"buttonEdit";
			this->buttonEdit->Size = System::Drawing::Size(244, 35);
			this->buttonEdit->TabIndex = 1;
			this->buttonEdit->Text = L"Редактор заявки";
			this->buttonEdit->UseVisualStyleBackColor = true;
			this->buttonEdit->Click += gcnew System::EventHandler(this, &MyForm::buttonEdit_Click);
			// 
			// buttonMark
			// 
			this->buttonMark->Location = System::Drawing::Point(288, 69);
			this->buttonMark->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonMark->Name = L"buttonMark";
			this->buttonMark->Size = System::Drawing::Size(244, 35);
			this->buttonMark->TabIndex = 1;
			this->buttonMark->Text = L"Выполнена (готово)";
			this->buttonMark->UseVisualStyleBackColor = true;
			this->buttonMark->Click += gcnew System::EventHandler(this, &MyForm::buttonMark_Click);
			// 
			// buttonRemove
			// 
			this->buttonRemove->Location = System::Drawing::Point(15, 69);
			this->buttonRemove->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonRemove->Name = L"buttonRemove";
			this->buttonRemove->Size = System::Drawing::Size(244, 35);
			this->buttonRemove->TabIndex = 1;
			this->buttonRemove->Text = L"Отказ от ремонта (удалить)";
			this->buttonRemove->UseVisualStyleBackColor = true;
			this->buttonRemove->Click += gcnew System::EventHandler(this, &MyForm::buttonRemove_Click);
			// 
			// comboBoxMaster
			// 
			this->comboBoxMaster->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxMaster->FormattingEnabled = true;
			this->comboBoxMaster->Location = System::Drawing::Point(1002, 143);
			this->comboBoxMaster->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBoxMaster->Name = L"comboBoxMaster";
			this->comboBoxMaster->Size = System::Drawing::Size(242, 28);
			this->comboBoxMaster->TabIndex = 2;
			this->comboBoxMaster->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::FilterChange);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1002, 111);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Мастер";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(284, 117);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Неисправность";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(594, 117);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Вид заявок";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(796, 117);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Дата";
			// 
			// textBoxDescription
			// 
			this->textBoxDescription->Location = System::Drawing::Point(280, 149);
			this->textBoxDescription->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxDescription->Name = L"textBoxDescription";
			this->textBoxDescription->Size = System::Drawing::Size(289, 26);
			this->textBoxDescription->TabIndex = 7;
			this->textBoxDescription->TextChanged += gcnew System::EventHandler(this, &MyForm::FilterChange);
			// 
			// comboBoxType
			// 
			this->comboBoxType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxType->FormattingEnabled = true;
			this->comboBoxType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Все", L"Активные", L"Завершенные" });
			this->comboBoxType->Location = System::Drawing::Point(598, 148);
			this->comboBoxType->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBoxType->Name = L"comboBoxType";
			this->comboBoxType->Size = System::Drawing::Size(180, 28);
			this->comboBoxType->TabIndex = 8;
			this->comboBoxType->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::FilterChange);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker->Location = System::Drawing::Point(801, 145);
			this->dateTimePicker->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(190, 26);
			this->dateTimePicker->TabIndex = 9;
			this->dateTimePicker->ValueChanged += gcnew System::EventHandler(this, &MyForm::FilterChange);
			// 
			// comboBoxNumber
			// 
			this->comboBoxNumber->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxNumber->FormattingEnabled = true;
			this->comboBoxNumber->Location = System::Drawing::Point(18, 148);
			this->comboBoxNumber->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBoxNumber->Name = L"comboBoxNumber";
			this->comboBoxNumber->Size = System::Drawing::Size(242, 28);
			this->comboBoxNumber->TabIndex = 2;
			this->comboBoxNumber->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::FilterChange);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 115);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 20);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Найти по номеру";
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(1000, 25);
			this->buttonExit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(244, 35);
			this->buttonExit->TabIndex = 1;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// checkBoxUseDate
			// 
			this->checkBoxUseDate->AutoSize = true;
			this->checkBoxUseDate->Checked = true;
			this->checkBoxUseDate->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxUseDate->Location = System::Drawing::Point(870, 117);
			this->checkBoxUseDate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkBoxUseDate->Name = L"checkBoxUseDate";
			this->checkBoxUseDate->Size = System::Drawing::Size(103, 24);
			this->checkBoxUseDate->TabIndex = 10;
			this->checkBoxUseDate->Text = L"Неважно";
			this->checkBoxUseDate->UseVisualStyleBackColor = true;
			this->checkBoxUseDate->CheckedChanged += gcnew System::EventHandler(this, &MyForm::FilterChange);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1263, 646);
			this->Controls->Add(this->checkBoxUseDate);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->comboBoxType);
			this->Controls->Add(this->textBoxDescription);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxNumber);
			this->Controls->Add(this->comboBoxMaster);
			this->Controls->Add(this->buttonMark);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonEdit);
			this->Controls->Add(this->buttonRemove);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->listBox);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"Сервисный центр";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		AutoList^ list; //Все дальнейшие методы – просто «передают» запросы к стандартному компоненту List
		String^ fileName = "Services.txt";
		//При загрузке
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//Загрузить список
		if (File::Exists(fileName))
		{
			StreamReader^ reader = gcnew StreamReader(fileName);
			list = gcnew AutoList(reader);
			reader->Close();
		}
		else
			list = gcnew AutoList();
		//Заполнить поля поиска (мастер, номер)
		comboBoxMaster->Items->Clear();
		comboBoxMaster->Items->Add("Все");
		comboBoxNumber->Items->Clear();
		comboBoxNumber->Items->Add("Все");
		for (int k = 0; k < list->Count(); k++)
		{
			ServiceUnit^ su = list[k];
			if (comboBoxMaster->Items->IndexOf(su->Master) < 0)
				comboBoxMaster->Items->Add(su->Master);
			if (comboBoxNumber->Items->IndexOf(su->AutoNumber) < 0)
				comboBoxNumber->Items->Add(su->AutoNumber);
		}

		//Сегодняшняя дата
		dateTimePicker->Value = DateTime::Now.Date;
		//Вид заявок (все)
		comboBoxType->SelectedIndex = 0;
		//Сделать выборку
		Filter();
	}
		   //Создается объект StreamWriter(который умеет писать в текстовый файл)
		   //У Списка_Автомобилей есть метод «Сохрани», который и вызывается. 
		   //В том методе, соответственно, вызывается метод «Сохрани» для каждого элемента списка.
		  // И вот он наконец то делает что то полезное – записывает описание автомобильчика
	private: void Save()
	{
		StreamWriter^ writer = gcnew StreamWriter(fileName);
		list->Save(writer);
		writer->Close();
	}

	private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) {
		Save();
		Close();
	}
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		ServiceUnit^ su = gcnew ServiceUnit();
		FormCard^ F = gcnew FormCard();
		F->su = su;
		F->SetValues(comboBoxMaster);
		if (F->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		list->Add(F->su);
		Filter();
		Save();
	}
		   //Удалить
	private: System::Void buttonRemove_Click(System::Object^  sender, System::EventArgs^  e) {
		if (listBox->SelectedItem == nullptr) return;
		ServiceUnit^ su = (ServiceUnit^)listBox->SelectedItem;
		list->Remove(su);
		Filter();
		Save();
	}
		   //Изменить(исправить, обновить)
	private: System::Void buttonEdit_Click(System::Object^  sender, System::EventArgs^  e) {
		if (listBox->SelectedItem == nullptr) return;
		ServiceUnit^ su = (ServiceUnit^)listBox->SelectedItem;
		FormCard^ F = gcnew FormCard();
		F->su = su;
		F->SetValues(comboBoxMaster);
		if (F->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		Filter();
		Save();
	}
		   //Отметить (заявка выполнена)
	private: System::Void buttonMark_Click(System::Object^  sender, System::EventArgs^  e) {
		if (listBox->SelectedItem == nullptr) return;
		ServiceUnit^ su = (ServiceUnit^)listBox->SelectedItem;
		su->Managed = true;
		Filter();
		Save();
	}

			 //Сделать выборку
		   //Одна из самых важных функций. Из полного списка выбрать только те заявки, которые подходят под условия
		   //Принцип работы : берем заявку, если(одно из) условий не выполняется – переходим к следующей заявке.
		//Если вдруг выполняются все условия – добавляем в ListBox
	//пользуясь тем, что ListBox может хранить любые объекты и отображает в соответствующих строках то, что 
	//dозвращает метод ToString()

	private:void Filter()
	{
		int index = listBox->SelectedIndex;
		listBox->Items->Clear();
		for (int k = 0; k < list->Count(); k++)
		{ 
			ServiceUnit^ su = list[k];
			//Номер?
			if (comboBoxNumber->SelectedIndex >= 1)
				//Не совпал
				if (su->AutoNumber != comboBoxNumber->Text) continue;
			//Мастер?
			if (comboBoxMaster->SelectedIndex >= 1)
				if (su->Master != comboBoxMaster->Text) continue;

			//Неполадка?
			if (textBoxDescription->Text != "")
				if (su->Description->ToLower()->IndexOf(textBoxDescription->Text->ToLower()) < 0)
					continue;
			//Закрыта?
			if (comboBoxType->SelectedIndex > 0)
				if (su->Managed == (comboBoxType->SelectedIndex == 1)) continue;
			//Дата между Старт и Финиш?
			if (!checkBoxUseDate->Checked)
				if (su->StartDate.Date > dateTimePicker->Value.Date 
					||
					su->DeadLineDate.Date < dateTimePicker->Value.Date
					) continue;
			//В список
			listBox->Items->Add(su);
		}
		if (index < 0) index = 0;
		if (index >= listBox->Items->Count) index = listBox->Items->Count - 1;
		if (index >= 0) listBox->SelectedIndex = index;
	}
		   //Обработчик многих событий (галочки/списки/даты и прочее).
		  // Единственное, что делает – вызывает Фильтр


	private: System::Void FilterChange(System::Object^  sender, System::EventArgs^  e) 
	{
		Filter();
	}
};
}
