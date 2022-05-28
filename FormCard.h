#pragma once

#include "ServiceUnit.h"

namespace ServiceCenter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormCard
	/// </summary>
	public ref class FormCard : public System::Windows::Forms::Form
	{
	public:
		FormCard(void)
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
		~FormCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckBox^  checkBoxManaged;
	private: System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::Button^  buttonCancel;



	private: System::Windows::Forms::TextBox^  textBoxAutoNumber;
	private: System::Windows::Forms::TextBox^  textBoxMaster;
	private: System::Windows::Forms::TextBox^  textBoxDescription;



	private: System::Windows::Forms::DateTimePicker^  dateTimePickerStart;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerDead;


	private: System::Windows::Forms::ComboBox^  comboBox;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBoxManaged = (gcnew System::Windows::Forms::CheckBox());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->textBoxAutoNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMaster = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDescription = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerDead = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Номер автомобиля";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Дата регистрации";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Дата исполнения";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Мастер";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Описание";
			// 
			// checkBoxManaged
			// 
			this->checkBoxManaged->AutoSize = true;
			this->checkBoxManaged->Location = System::Drawing::Point(117, 211);
			this->checkBoxManaged->Name = L"checkBoxManaged";
			this->checkBoxManaged->Size = System::Drawing::Size(83, 17);
			this->checkBoxManaged->TabIndex = 1;
			this->checkBoxManaged->Text = L"Выполнена";
			this->checkBoxManaged->UseVisualStyleBackColor = true;
			this->checkBoxManaged->CheckedChanged += gcnew System::EventHandler(this, &FormCard::Check);
			// 
			// buttonOK
			// 
			this->buttonOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonOK->Location = System::Drawing::Point(10, 240);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 23);
			this->buttonOK->TabIndex = 2;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &FormCard::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonCancel->Location = System::Drawing::Point(278, 240);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 3;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			// 
			// textBoxAutoNumber
			// 
			this->textBoxAutoNumber->Location = System::Drawing::Point(120, 23);
			this->textBoxAutoNumber->Name = L"textBoxAutoNumber";
			this->textBoxAutoNumber->Size = System::Drawing::Size(233, 20);
			this->textBoxAutoNumber->TabIndex = 4;
			this->textBoxAutoNumber->TextChanged += gcnew System::EventHandler(this, &FormCard::Check);
			// 
			// textBoxMaster
			// 
			this->textBoxMaster->Location = System::Drawing::Point(118, 142);
			this->textBoxMaster->Name = L"textBoxMaster";
			this->textBoxMaster->Size = System::Drawing::Size(212, 20);
			this->textBoxMaster->TabIndex = 4;
			this->textBoxMaster->TextChanged += gcnew System::EventHandler(this, &FormCard::Check);
			// 
			// textBoxDescription
			// 
			this->textBoxDescription->Location = System::Drawing::Point(117, 180);
			this->textBoxDescription->Name = L"textBoxDescription";
			this->textBoxDescription->Size = System::Drawing::Size(245, 20);
			this->textBoxDescription->TabIndex = 4;
			this->textBoxDescription->TextChanged += gcnew System::EventHandler(this, &FormCard::Check);
			// 
			// dateTimePickerStart
			// 
			this->dateTimePickerStart->Location = System::Drawing::Point(119, 63);
			this->dateTimePickerStart->Name = L"dateTimePickerStart";
			this->dateTimePickerStart->Size = System::Drawing::Size(128, 20);
			this->dateTimePickerStart->TabIndex = 5;
			this->dateTimePickerStart->ValueChanged += gcnew System::EventHandler(this, &FormCard::Check);
			// 
			// dateTimePickerDead
			// 
			this->dateTimePickerDead->Location = System::Drawing::Point(120, 96);
			this->dateTimePickerDead->Name = L"dateTimePickerDead";
			this->dateTimePickerDead->Size = System::Drawing::Size(130, 20);
			this->dateTimePickerDead->TabIndex = 5;
			this->dateTimePickerDead->ValueChanged += gcnew System::EventHandler(this, &FormCard::Check);
			// 
			// comboBox
			// 
			this->comboBox->FormattingEnabled = true;
			this->comboBox->Location = System::Drawing::Point(120, 141);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(230, 21);
			this->comboBox->TabIndex = 6;
			this->comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &FormCard::comboBox_SelectedIndexChanged);
			// 
			// FormCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(365, 271);
			this->Controls->Add(this->dateTimePickerDead);
			this->Controls->Add(this->dateTimePickerStart);
			this->Controls->Add(this->textBoxDescription);
			this->Controls->Add(this->textBoxMaster);
			this->Controls->Add(this->textBoxAutoNumber);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->checkBoxManaged);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox);
			this->Name = L"FormCard";
			this->Text = L"Заявка на ремонт";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Описание заявки
	public: ServiceUnit^ su; //Сюда вызывающий метод запишет заявку
			//Установить значения на форме
		  //Скопировать поля заявки в визуальные компоненты 
	public: void SetValues(ComboBox^ Masters)
	{
		textBoxAutoNumber->Text = su->AutoNumber;
		dateTimePickerStart->Value = su->StartDate;
		dateTimePickerDead->Value = su->DeadLineDate;
		textBoxDescription->Text = su->Description;
		textBoxMaster->Text = su->Master;
		checkBoxManaged->Checked = su->Managed;
		for each (String^ s in Masters->Items)
			comboBox->Items->Add(s);
		SetEnable();
	}
			//Прочитать значения с формы
		  //И обратно, из компонентов в поля заявки
	public: void GetValues()
	{
		su->AutoNumber = textBoxAutoNumber->Text;
		su->StartDate = dateTimePickerStart->Value;
		su->DeadLineDate = dateTimePickerDead->Value;
		su->Description = textBoxDescription->Text;
		su->Master = textBoxMaster->Text;
		su->Managed = checkBoxManaged->Checked;
	}

			//Все ли введено верно? Разрешить нажать на OK
		  //Только если введены верные значения, то можно разрешить нажать кнопку.
		  //То есть мы ее выключаем, проверяем много условий(если что то не так – то закончить выполнение функции), 
		  //и если все нормально – то включаем

	public: void SetEnable()
	{
		buttonOK->Enabled = false;
		if (textBoxAutoNumber->Text == "") return;
		if (dateTimePickerDead->Value.Date < dateTimePickerStart->Value.Date) return;
		if (textBoxDescription->Text == "") return;
		buttonOK->Enabled = true;
	}

			//Нажатие на OK
	private: System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e) {
		GetValues();
	}
		   //Нескольких событий – изменения в датах,  номере автомобиля и описания неполадки
	private: System::Void Check(System::Object^  sender, System::EventArgs^  e) 
	{
		SetEnable();
	}

//При выборе мастера из списка – записать его в нужное место.Только для помощи епри выборе, 
//никто не запрещает вводить ручками.Например, если мастер новый.

private: System::Void comboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	textBoxMaster->Text = comboBox->Text;
}
};
}
