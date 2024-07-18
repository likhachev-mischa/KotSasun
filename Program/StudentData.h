#pragma once
#include <string>

class StudentData {
private:
	std::string _fio;
	int _marks[5];
	double _avg;
	bool _isInDebt;

public:
	StudentData() : _fio(), _avg(NULL), _isInDebt(false) {}
	StudentData(const StudentData& other)
		: _fio(other._fio), _avg(other._avg), _isInDebt(other._isInDebt) {
		for (int i = 0; i < 5; ++i)
		{
			_marks[i] = other._marks[i];
	}
	}

	StudentData(std::string FIO, int* marks) {
		_fio = FIO;

		int sum = 0;
		_isInDebt = false;
		for (int i = 0; i < 5; ++i) {
			_marks[i] = marks[i];
			sum += marks[i];
			if (!(_isInDebt) && marks[i] == 2) {
				_isInDebt = true;
			}
		}
		_avg = sum / 5.;
	}

	int key() const { return int(_avg * 5); }

	std::string FIO() const { return _fio; }

	bool isInDebt() const { return _isInDebt; }

	double avg() const { return _avg; }

	std::string marks() const{
		std::string result = " marks: ";
		for (int i = 0; i < 5; ++i)
		{
			result += std::to_string(_marks[i]);
			result += " ";
		}
		return result;
	}

	bool operator>(const StudentData& other) { return _avg > other.avg(); }

	bool operator<(const StudentData& other) { return _avg < other.avg(); }

	bool operator==(const StudentData& other) { return _avg == other.avg(); }

	StudentData& operator=(const StudentData& other) {
		if (this == &other) {
			return *this;
		}

		_fio = other._fio;
		_avg = other._avg;
		_isInDebt = other._isInDebt;

		for (int i = 0; i < 5; ++i)
		{
			_marks[i] = other._marks[i];
		}

		return *this;
	}
};
