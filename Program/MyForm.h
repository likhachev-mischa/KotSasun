#pragma once

#include "Config.h"
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <queue>

#include "LinkedList.h"
#include "ITree.h"
#include "BST.h"
#include "AVL.h"
#include "StudentData.h"
#include "Utils.h"


namespace Program {

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
	private: System::Windows::Forms::Button^ LinkedListButton1;

	private: System::Windows::Forms::Panel^ DisplayPanel;
	private: System::Windows::Forms::Button^ LinkedListButton2;


	private: System::Windows::Forms::Button^ BSTButton;
	private: System::Windows::Forms::Button^ AVLButton;
	private: System::Windows::Forms::Button^ BestStudentsButton;


	private: System::ComponentModel::IContainer^ components;


















	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->LinkedListButton1 = (gcnew System::Windows::Forms::Button());
			this->DisplayPanel = (gcnew System::Windows::Forms::Panel());
			this->LinkedListButton2 = (gcnew System::Windows::Forms::Button());
			this->BSTButton = (gcnew System::Windows::Forms::Button());
			this->AVLButton = (gcnew System::Windows::Forms::Button());
			this->BestStudentsButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
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
			this->StudentDataSendButton->Click += gcnew System::EventHandler(this, &MyForm::StudentDataSendButton_Click);
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
			this->FIOTextBox->Location = System::Drawing::Point(143, 100);
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
			// LinkedListButton1
			// 
			this->LinkedListButton1->Location = System::Drawing::Point(12, 214);
			this->LinkedListButton1->Name = L"LinkedListButton1";
			this->LinkedListButton1->Size = System::Drawing::Size(152, 26);
			this->LinkedListButton1->TabIndex = 19;
			this->LinkedListButton1->Text = L"Динамическая цепочка 1";
			this->LinkedListButton1->UseVisualStyleBackColor = true;
			this->LinkedListButton1->Click += gcnew System::EventHandler(this, &MyForm::LinkedListButton1_Click);
			// 
			// DisplayPanel
			// 
			this->DisplayPanel->AutoScroll = true;
			this->DisplayPanel->Location = System::Drawing::Point(190, 214);
			this->DisplayPanel->Name = L"DisplayPanel";
			this->DisplayPanel->Size = System::Drawing::Size(391, 211);
			this->DisplayPanel->TabIndex = 21;
			// 
			// LinkedListButton2
			// 
			this->LinkedListButton2->Location = System::Drawing::Point(12, 246);
			this->LinkedListButton2->Name = L"LinkedListButton2";
			this->LinkedListButton2->Size = System::Drawing::Size(152, 26);
			this->LinkedListButton2->TabIndex = 22;
			this->LinkedListButton2->Text = L"Динамическая цепочка 2";
			this->LinkedListButton2->UseVisualStyleBackColor = true;
			this->LinkedListButton2->Click += gcnew System::EventHandler(this, &MyForm::LinkedListButton2_Click);
			// 
			// BSTButton
			// 
			this->BSTButton->Location = System::Drawing::Point(12, 278);
			this->BSTButton->Name = L"BSTButton";
			this->BSTButton->Size = System::Drawing::Size(152, 26);
			this->BSTButton->TabIndex = 23;
			this->BSTButton->Text = L"Дерево поиска";
			this->BSTButton->UseVisualStyleBackColor = true;
			this->BSTButton->Click += gcnew System::EventHandler(this, &MyForm::BSTButton_Click);
			// 
			// AVLButton
			// 
			this->AVLButton->Location = System::Drawing::Point(12, 310);
			this->AVLButton->Name = L"AVLButton";
			this->AVLButton->Size = System::Drawing::Size(152, 26);
			this->AVLButton->TabIndex = 24;
			this->AVLButton->Text = L"Дерево AVL";
			this->AVLButton->UseVisualStyleBackColor = true;
			this->AVLButton->Click += gcnew System::EventHandler(this, &MyForm::AVLButton_Click);
			// 
			// BestStudentsButton
			// 
			this->BestStudentsButton->Location = System::Drawing::Point(12, 342);
			this->BestStudentsButton->Name = L"BestStudentsButton";
			this->BestStudentsButton->Size = System::Drawing::Size(152, 26);
			this->BestStudentsButton->TabIndex = 25;
			this->BestStudentsButton->Text = L"Лучшие студенты";
			this->BestStudentsButton->UseVisualStyleBackColor = true;
			this->BestStudentsButton->Click += gcnew System::EventHandler(this, &MyForm::BestStudentsButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 443);
			this->Controls->Add(this->BestStudentsButton);
			this->Controls->Add(this->AVLButton);
			this->Controls->Add(this->BSTButton);
			this->Controls->Add(this->LinkedListButton2);
			this->Controls->Add(this->DisplayPanel);
			this->Controls->Add(this->LinkedListButton1);
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
			this->Controls->Add(this->FileNameTextBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void DisplayMessage_InvalidFile()
	{
		System::Windows::Forms::MessageBox::Show("File is not valid!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	private: System::Void DisplayMessage_InvalidFIO()
	{
		System::Windows::Forms::MessageBox::Show("FIO is not valid!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	private: System::Void DisplayMessage_InvalidMarks()
	{
		System::Windows::Forms::MessageBox::Show("Marks are not valid!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	private: bool ValidateMarks(const std::string& str)
	{
		if (str.length() != 7)
		{
			return false;
		}
		for (int i = 1; i < 6; ++i)
		{
			int mark = str[i] - '0';
			if (mark > 5 || mark < 2)
			{
				return false;
			}
		}
		return true;
	}

	private: System::Void FileNameSendButton_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string fileName = msclr::interop::marshal_as<std::string>(FileNameTextBox->Text);
		Program::Config::FILE_NAME = fileName;
		std::ofstream outfile(fileName, std::ios_base::app);
		if (!outfile.good())
		{
			DisplayMessage_InvalidFile();
			return;
		}
		outfile.close();
	}

	private: System::Void FileNameDeclineButton_Click(System::Object^ sender, System::EventArgs^ e) {
		FileNameTextBox->Text = "";
	}

	private: System::Void FIODeclineButton_Click(System::Object^ sender, System::EventArgs^ e) {
		FIOTextBox->Text = "";
	}
	private: System::Void StudentDataSendButton_Click(System::Object^ sender, System::EventArgs^ e) {

		std::ofstream outfile(Program::Config::FILE_NAME, std::ios_base::app);

		if (!outfile.good())
		{
			DisplayMessage_InvalidFile();
			return;
		}

		if (FIOTextBox->Text == "" || FIOTextBox->Text->Length > 20)
		{
			DisplayMessage_InvalidFIO();
			outfile.close();
			return;
		}
		std::string fio = msclr::interop::marshal_as<std::string>(FIOTextBox->Text);

		std::string marks = "|";
		marks += msclr::interop::marshal_as<std::string>(MarksTextBox1->Text);
		marks += msclr::interop::marshal_as<std::string>(MarksTextBox2->Text);
		marks += msclr::interop::marshal_as<std::string>(MarksTextBox3->Text);
		marks += msclr::interop::marshal_as<std::string>(MarksTextBox4->Text);
		marks += msclr::interop::marshal_as<std::string>(MarksTextBox5->Text) + "\n";

		if (!ValidateMarks(marks))
		{
			DisplayMessage_InvalidMarks();
			outfile.close();
			return;
		}

		outfile << fio;
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

	private: System::Void LinkedListButton1_Click(System::Object^ sender, System::EventArgs^ e) {

		LinkedList<StudentData> list;
		auto debtIter = list.begin();

		std::string data;
		std::ifstream infile(Program::Config::FILE_NAME);
		if (!infile.good())
		{
			DisplayMessage_InvalidFile();
			return;
		}
		while (infile >> data)
		{
			StudentData student = Program::Utils::createStudentFromString(data);

			if (student.isInDebt())
			{
				list.addToHead(student);
				if (!debtIter.GetNode())
				{
					debtIter = list.begin();
				}
			}
			else
			{
				if (!debtIter.GetNode())
				{
					list.addToHead(student);
				}
				else
				{
					list.addAfterNode(student, debtIter.GetNode());
				}
			}
		}
		infile.close();

		int y = 10;
		int x = 20;
		int paddingY = 30;
		DisplayPanel->Controls->Clear();
		for (auto& elem : list)
		{
			Label^ label = Program::Utils::createStudentLabel(x, y, elem);
			label->Parent = DisplayPanel;
			DisplayPanel->Controls->Add(label);
			y += paddingY;
		}

	}


	private: System::Void LinkedListButton2_Click(System::Object^ sender, System::EventArgs^ e) {

		LinkedList<StudentData> list;

		std::string data;
		std::ifstream infile(Program::Config::FILE_NAME);

		if (!infile.good())
		{
			DisplayMessage_InvalidFile();
			return;
		}
		if (infile >> data)
		{
			StudentData student = Program::Utils::createStudentFromString(data);
			list.addToHead(student);
		}

		while (infile >> data)
		{
			StudentData student = Program::Utils::createStudentFromString(data);
			Program::Utils::insertSorted(list, student, Program::Utils::comparatorGreater);
		}
		infile.close();

		int y = 10;
		int x = 20;
		int paddingY = 30;
		DisplayPanel->Controls->Clear();
		for (auto& elem : list)
		{
			Label^ label = Program::Utils::createStudentLabel(20, y, elem);
			label->Parent = DisplayPanel;
			DisplayPanel->Controls->Add(label);
			y += paddingY;
		}
	}


	private: System::Void DisplayTree(ITree<StudentData>& tree)
	{
		DisplayPanel->Controls->Clear();
		int x = 150;
		int paddingX = 380;
		int y = 10;
		int paddingY = 20;
		for (int i = 1; i <= 3; ++i)
		{
			int tempX = x;
			std::queue<LinkedList<StudentData>*> que = tree.getLevel(i);

			while (!que.empty())
			{
				LinkedList<StudentData>* list = que.front();
				que.pop();
				Panel^ panel = Program::Utils::createPanel(tempX, y);
				panel->Parent = DisplayPanel;
				DisplayPanel->Controls->Add(panel);

				if (list != nullptr)
				{
					int tempY = 0;
					for (auto& elem : *list)
					{
						Label^ label = Program::Utils::createStudentLabel(10, tempY, elem);
						label->Parent = panel;
						panel->Controls->Add(label);
						tempY += paddingY;
					}
				}

				tempX += paddingX;
			}

			y += 70;
			paddingX /= 2;
			x -= paddingX / 2;

		}

	}

	private: System::Void BSTButton_Click(System::Object^ sender, System::EventArgs^ e) {

		std::string data;
		std::ifstream infile(Program::Config::FILE_NAME);

		if (!infile.good())
		{
			DisplayMessage_InvalidFile();
			return;
		}
		BST<StudentData> bst;

		while (infile >> data)
		{
			StudentData student = Program::Utils::createStudentFromString(data);
			bst.insert(student);
		}
		infile.close();

		DisplayTree(bst);

	}
	private: System::Void AVLButton_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string data;
		std::ifstream infile(Program::Config::FILE_NAME);

		if (!infile.good())
		{
			DisplayMessage_InvalidFile();
			return;
		}
		AVL<StudentData> avl;

		while (infile >> data)
		{
			StudentData student = Program::Utils::createStudentFromString(data);
			avl.insert(student);
		}
		infile.close();

		DisplayTree(avl);
	}
	private: System::Void BestStudentsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		LinkedList<StudentData> list;

		std::string data;
		std::ifstream infile(Program::Config::FILE_NAME);
		if (!infile.good())
		{
			DisplayMessage_InvalidFile();
			return;
		}

		if (infile >> data)
		{
			StudentData student = Program::Utils::createStudentFromString(data);
			list.addToHead(student);
		}

		while (infile >> data)
		{
			StudentData student = Program::Utils::createStudentFromString(data);
			Program::Utils::insertSorted(list, student, Program::Utils::comparatorLesser);
		}

		infile.close();

		int y = 10;
		int x = 20;
		int paddingY = 30;
		DisplayPanel->Controls->Clear();

		double bestMarks = (*list.begin()).avg();

		for (auto& elem : list)
		{
			if (elem.avg() != bestMarks)
			{
				break;
			}
			Label^ label = Program::Utils::createStudentLabel(20, y, elem);
			label->Text += (gcnew System::String(elem.marks().c_str()));
			label->Parent = DisplayPanel;
			DisplayPanel->Controls->Add(label);
			y += paddingY;
		}
	}

	};
}
