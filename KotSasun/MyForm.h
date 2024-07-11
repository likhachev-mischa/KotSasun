#pragma once

#include "Config.h"
#include <fstream>
#include <msclr/marshal_cppstd.h>

#include "LinkedList.h"
#include "StudentData.h"

namespace KotSasun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::Button^ FileNameSendButton;
	private: System::Windows::Forms::Button^ FileNameDeclineButton;
	private: System::Windows::Forms::Label^ CreateFileLabel;
	private: System::Windows::Forms::Label^ FileNameLabel;
	private: System::Windows::Forms::Label^ FIOLabel;





	private: System::Windows::Forms::Label^ CreateFIOLabel;
	private: System::Windows::Forms::Button^ FIODeclineButton;






	private: System::Windows::Forms::Label^ MarksLabel;

	private: System::Windows::Forms::TextBox^ MarksTextBox2;
	private: System::Windows::Forms::TextBox^ MarksTextBox4;
	private: System::Windows::Forms::TextBox^ MarksTextBox3;
	private: System::Windows::Forms::TextBox^ MarksTextBox5;
	private: System::Windows::Forms::Button^ MarksDeclineButton;
	private: System::Windows::Forms::Button^ StudentDataSendButton;



	private: System::Windows::Forms::TextBox^ MarksTextBox1;
	private: System::Windows::Forms::TextBox^ FIOTextBox;
	private: System::Windows::Forms::TextBox^ FileNameTextBox;
	private: System::Windows::Forms::Button^ LinkedList1;
	private: System::Windows::Forms::Panel^ panel1;
















	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->FileNameSendButton = (gcnew System::Windows::Forms::Button());
			this->FileNameDeclineButton = (gcnew System::Windows::Forms::Button());
			this->CreateFileLabel = (gcnew System::Windows::Forms::Label());
			this->FileNameLabel = (gcnew System::Windows::Forms::Label());
			this->FIOLabel = (gcnew System::Windows::Forms::Label());
			this->CreateFIOLabel = (gcnew System::Windows::Forms::Label());
			this->FIODeclineButton = (gcnew System::Windows::Forms::Button());
			this->MarksLabel = (gcnew System::Windows::Forms::Label());
			this->MarksTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->MarksTextBox4 = (gcnew System::Windows::Forms::TextBox());
			this->MarksTextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->MarksTextBox5 = (gcnew System::Windows::Forms::TextBox());
			this->MarksDeclineButton = (gcnew System::Windows::Forms::Button());
			this->StudentDataSendButton = (gcnew System::Windows::Forms::Button());
			this->MarksTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->FIOTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FileNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->LinkedList1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(593, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// FileNameSendButton
			// 
			this->FileNameSendButton->Location = System::Drawing::Point(486, 44);
			this->FileNameSendButton->Name = L"FileNameSendButton";
			this->FileNameSendButton->Size = System::Drawing::Size(75, 23);
			this->FileNameSendButton->TabIndex = 2;
			this->FileNameSendButton->Text = L"Отправить";
			this->FileNameSendButton->UseVisualStyleBackColor = true;
			this->FileNameSendButton->Click += gcnew System::EventHandler(this, &MyForm::FileNameSendButton_Click);
			// 
			// FileNameDeclineButton
			// 
			this->FileNameDeclineButton->Location = System::Drawing::Point(413, 44);
			this->FileNameDeclineButton->Name = L"FileNameDeclineButton";
			this->FileNameDeclineButton->Size = System::Drawing::Size(75, 23);
			this->FileNameDeclineButton->TabIndex = 3;
			this->FileNameDeclineButton->Text = L"Отмена";
			this->FileNameDeclineButton->UseVisualStyleBackColor = true;
			this->FileNameDeclineButton->Click += gcnew System::EventHandler(this, &MyForm::FileNameDeclineButton_Click);
			// 
			// CreateFileLabel
			// 
			this->CreateFileLabel->AutoSize = true;
			this->CreateFileLabel->Location = System::Drawing::Point(12, 25);
			this->CreateFileLabel->Name = L"CreateFileLabel";
			this->CreateFileLabel->Size = System::Drawing::Size(91, 13);
			this->CreateFileLabel->TabIndex = 4;
			this->CreateFileLabel->Text = L"Создание файла";
			// 
			// FileNameLabel
			// 
			this->FileNameLabel->AutoSize = true;
			this->FileNameLabel->Location = System::Drawing::Point(15, 54);
			this->FileNameLabel->Name = L"FileNameLabel";
			this->FileNameLabel->Size = System::Drawing::Size(64, 13);
			this->FileNameLabel->TabIndex = 5;
			this->FileNameLabel->Text = L"Имя файла";
			// 
			// FIOLabel
			// 
			this->FIOLabel->AutoSize = true;
			this->FIOLabel->Location = System::Drawing::Point(15, 108);
			this->FIOLabel->Name = L"FIOLabel";
			this->FIOLabel->Size = System::Drawing::Size(43, 13);
			this->FIOLabel->TabIndex = 10;
			this->FIOLabel->Text = L"Ф.И.О.";
			// 
			// CreateFIOLabel
			// 
			this->CreateFIOLabel->AutoSize = true;
			this->CreateFIOLabel->Location = System::Drawing::Point(12, 79);
			this->CreateFIOLabel->Name = L"CreateFIOLabel";
			this->CreateFIOLabel->Size = System::Drawing::Size(72, 13);
			this->CreateFIOLabel->TabIndex = 9;
			this->CreateFIOLabel->Text = L"Ввод данных";
			// 
			// FIODeclineButton
			// 
			this->FIODeclineButton->Location = System::Drawing::Point(413, 100);
			this->FIODeclineButton->Name = L"FIODeclineButton";
			this->FIODeclineButton->Size = System::Drawing::Size(75, 23);
			this->FIODeclineButton->TabIndex = 8;
			this->FIODeclineButton->Text = L"Отмена";
			this->FIODeclineButton->UseVisualStyleBackColor = true;
			this->FIODeclineButton->Click += gcnew System::EventHandler(this, &MyForm::FIODeclineButton_Click);
			// 
			// MarksLabel
			// 
			this->MarksLabel->AutoSize = true;
			this->MarksLabel->Location = System::Drawing::Point(15, 140);
			this->MarksLabel->Name = L"MarksLabel";
			this->MarksLabel->Size = System::Drawing::Size(45, 13);
			this->MarksLabel->TabIndex = 11;
			this->MarksLabel->Text = L"Оценки";
			// 
			// MarksTextBox2
			// 
			this->MarksTextBox2->Location = System::Drawing::Point(166, 140);
			this->MarksTextBox2->Name = L"MarksTextBox2";
			this->MarksTextBox2->Size = System::Drawing::Size(23, 20);
			this->MarksTextBox2->TabIndex = 13;
			// 
			// MarksTextBox4
			// 
			this->MarksTextBox4->Location = System::Drawing::Point(214, 140);
			this->MarksTextBox4->Name = L"MarksTextBox4";
			this->MarksTextBox4->Size = System::Drawing::Size(23, 20);
			this->MarksTextBox4->TabIndex = 15;
			// 
			// MarksTextBox3
			// 
			this->MarksTextBox3->Location = System::Drawing::Point(190, 140);
			this->MarksTextBox3->Name = L"MarksTextBox3";
			this->MarksTextBox3->Size = System::Drawing::Size(23, 20);
			this->MarksTextBox3->TabIndex = 14;
			// 
			// MarksTextBox5
			// 
			this->MarksTextBox5->Location = System::Drawing::Point(238, 140);
			this->MarksTextBox5->Name = L"MarksTextBox5";
			this->MarksTextBox5->Size = System::Drawing::Size(23, 20);
			this->MarksTextBox5->TabIndex = 16;
			// 
			// MarksDeclineButton
			// 
			this->MarksDeclineButton->Location = System::Drawing::Point(267, 140);
			this->MarksDeclineButton->Name = L"MarksDeclineButton";
			this->MarksDeclineButton->Size = System::Drawing::Size(75, 23);
			this->MarksDeclineButton->TabIndex = 18;
			this->MarksDeclineButton->Text = L"Отмена";
			this->MarksDeclineButton->UseVisualStyleBackColor = true;
			this->MarksDeclineButton->Click += gcnew System::EventHandler(this, &MyForm::MarksDeclineButton_Click);
			// 
			// StudentDataSendButton
			// 
			this->StudentDataSendButton->Location = System::Drawing::Point(486, 100);
			this->StudentDataSendButton->Name = L"StudentDataSendButton";
			this->StudentDataSendButton->Size = System::Drawing::Size(75, 65);
			this->StudentDataSendButton->TabIndex = 17;
			this->StudentDataSendButton->Text = L"Отправить";
			this->StudentDataSendButton->UseVisualStyleBackColor = true;
			this->StudentDataSendButton->Click += gcnew System::EventHandler(this, &MyForm::MarksSendButton_Click);
			// 
			// MarksTextBox1
			// 
			this->MarksTextBox1->Location = System::Drawing::Point(142, 140);
			this->MarksTextBox1->Name = L"MarksTextBox1";
			this->MarksTextBox1->Size = System::Drawing::Size(23, 20);
			this->MarksTextBox1->TabIndex = 12;
			// 
			// FIOTextBox
			// 
			this->FIOTextBox->Location = System::Drawing::Point(143, 102);
			this->FIOTextBox->Name = L"FIOTextBox";
			this->FIOTextBox->Size = System::Drawing::Size(264, 20);
			this->FIOTextBox->TabIndex = 6;
			// 
			// FileNameTextBox
			// 
			this->FileNameTextBox->Location = System::Drawing::Point(143, 48);
			this->FileNameTextBox->Name = L"FileNameTextBox";
			this->FileNameTextBox->Size = System::Drawing::Size(264, 20);
			this->FileNameTextBox->TabIndex = 0;
			// 
			// LinkedList1
			// 
			this->LinkedList1->Location = System::Drawing::Point(12, 214);
			this->LinkedList1->Name = L"LinkedList1";
			this->LinkedList1->Size = System::Drawing::Size(152, 26);
			this->LinkedList1->TabIndex = 19;
			this->LinkedList1->Text = L"Динамическая цепочка 1";
			this->LinkedList1->UseVisualStyleBackColor = true;
			this->LinkedList1->Click += gcnew System::EventHandler(this, &MyForm::LinkedList1_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Location = System::Drawing::Point(190, 214);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(321, 211);
			this->panel1->TabIndex = 21;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 450);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->LinkedList1);
			this->Controls->Add(this->MarksDeclineButton);
			this->Controls->Add(this->StudentDataSendButton);
			this->Controls->Add(this->MarksTextBox5);
			this->Controls->Add(this->MarksTextBox4);
			this->Controls->Add(this->MarksTextBox3);
			this->Controls->Add(this->MarksTextBox2);
			this->Controls->Add(this->MarksTextBox1);
			this->Controls->Add(this->MarksLabel);
			this->Controls->Add(this->FIOLabel);
			this->Controls->Add(this->CreateFIOLabel);
			this->Controls->Add(this->FIODeclineButton);
			this->Controls->Add(this->FIOTextBox);
			this->Controls->Add(this->FileNameLabel);
			this->Controls->Add(this->CreateFileLabel);
			this->Controls->Add(this->FileNameDeclineButton);
			this->Controls->Add(this->FileNameSendButton);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->FileNameTextBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FileNameSendButton_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string fileName = msclr::interop::marshal_as<std::string>(FileNameTextBox->Text);
		KotSasun_Config::FILE_NAME = fileName;
		std::ofstream outfile(fileName, std::ios_base::app);
		outfile.close();
	}

	private: System::Void FileNameDeclineButton_Click(System::Object^ sender, System::EventArgs^ e) {
		FileNameTextBox->Text = "";
	}

	private: System::Void FIODeclineButton_Click(System::Object^ sender, System::EventArgs^ e) {
		FIOTextBox->Text = "";
	}
	private: System::Void MarksSendButton_Click(System::Object^ sender, System::EventArgs^ e) {

		std::ofstream outfile(KotSasun_Config::FILE_NAME, std::ios_base::app);
		std::string fio = msclr::interop::marshal_as<std::string>(FIOTextBox->Text);
		outfile << fio;

		std::string marks = "|";
		marks += msclr::interop::marshal_as<std::string>(MarksTextBox1->Text);
		marks += msclr::interop::marshal_as<std::string>(MarksTextBox2->Text);
		marks += msclr::interop::marshal_as<std::string>(MarksTextBox3->Text);
		marks += msclr::interop::marshal_as<std::string>(MarksTextBox4->Text);
		marks += msclr::interop::marshal_as<std::string>(MarksTextBox5->Text) + "\n";
		outfile << marks;
		outfile.close();
	}
	private: System::Void MarksDeclineButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MarksTextBox1->Text = "";
		MarksTextBox2->Text = "";
		MarksTextBox3->Text = "";
		MarksTextBox4->Text = "";
		MarksTextBox5->Text = "";
	}
	private: System::Void LinkedList1_Click(System::Object^ sender, System::EventArgs^ e) {

		std::string data;
		std::ifstream infile(KotSasun_Config::FILE_NAME);

		int marks[5];
		LinkedList<StudentData> list;
		int debtIdx = -1;

		while (infile >> data)
		{
			int separatorIdx = data.find('|');
			std::string fio = data.substr(0, separatorIdx);

			for (int i = 0; i < 5; ++i)
			{
				marks[i] = data[++separatorIdx] - '0';
			}

			StudentData student(fio, marks);
			if (student.isInDebt())
			{
				list.addToHead(student);
				debtIdx++;
			}
			else
			{
				list.addAfterIndex(student, debtIdx);
			}
		}

		int y = 10;
		panel1->Controls->Clear();
		for (auto& elem : list)
		{
			auto label = (gcnew Label());
			label->Location = System::Drawing::Point(20, y);
			System::String^ text = gcnew String(elem.FIO().c_str());
			text +=" avg: " + elem.avg().ToString();
			label->Text = text;
			label->Size = System::Drawing::Size(100, 20);
			label->Parent = panel1;
			y += 30;
			panel1->Controls->Add(label);

		}

	}

	};
}
