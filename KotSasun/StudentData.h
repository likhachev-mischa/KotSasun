#pragma once
#include <string>

class StudentData {
private:
	std::string _fio;
	float _avg;
	bool _isInDebt;
public:

	StudentData()
	{

	}

	StudentData(std::string FIO, int* marks)
	{
		_fio = FIO;

		int sum = 0;
		_isInDebt = false;
		for (int i = 0; i < 5; ++i)
		{
			sum += marks[i];
			if (marks[i] == 2)
			{
				_isInDebt = true;
			}
		}
		_avg = sum / 5.;
	}

	const std::string FIO()
	{
		return _fio;
	}

	const bool isInDebt()
	{
		return _isInDebt;
	}

    const float avg()
	{
		return _avg;
	}

	bool operator > (StudentData& other)
	{
		return _avg > other.avg();
	}

	bool operator < (StudentData& other)
	{
		return _avg < other.avg();
	}

	bool operator == (StudentData& other)
	{
		return _avg == other.avg();
	}

};
