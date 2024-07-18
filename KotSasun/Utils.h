#pragma once

#include "StudentData.h"
#include <string>

namespace Program {
	namespace Utils {
		bool comparatorGreater(double a, double b)
		{
			return a > b;
		}

		bool comparatorLesser(double a, double b)
		{
			return a < b;
		}

		void insertSorted(LinkedList<StudentData>& list, StudentData& student, bool (*comparator)(double, double))
		{
			auto iter = list.begin();
			auto tempiter = iter;
			while (iter != nullptr)
			{
				if (iter == list.begin() &&
					comparator((*iter).avg(), student.avg()))
				{
					list.addToHead(student);
					break;

				}
				else
				{
					if (!comparator((*iter).avg(), student.avg()))
					{
						tempiter = iter;
					}
					else
					{
						list.addAfterNode(student, tempiter.GetNode());
						break;
					}
				}
				++iter;
			}
			if (iter == nullptr)
			{
				list.addAfterNode(student, tempiter.GetNode());
			}
		}

		StudentData createStudentFromString(std::string data)
		{
			int marks[5];
			int separatorIdx = data.find('|');
			std::string fio = data.substr(0, separatorIdx);

			for (int i = 0; i < 5; ++i)
			{
				marks[i] = data[++separatorIdx] - '0';
			}

			return	StudentData(fio, marks);
		}

		System::Windows::Forms::Label^ createStudentLabel(int x, int y, const StudentData& student)
		{
			auto label = (gcnew System::Windows::Forms::Label());
			label->Location = System::Drawing::Point(x, y);
			System::String^ text = gcnew System::String(student.FIO().c_str());
			text += " avg: " + student.avg().ToString();
			label->Text = text;
			label->Size = System::Drawing::Size(170, 20);
			return label;
		}

		System::Windows::Forms::Panel^ createPanel(int x, int y)
		{
			auto panel = (gcnew System::Windows::Forms::Panel());
			panel->Size = System::Drawing::Size(90, 40);
			panel->Location = System::Drawing::Point(x, y);
			panel->AutoScroll = true;
			return panel;
		}
	}
}

