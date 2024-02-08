#include <iostream>
#include <vector>

std::vector<int> SumOfChuncks(std::vector<int>& p_ChuncksList)
{
	int              _Counter = 0 ;
	std::vector<int> _Result      ;

	while (_Counter < p_ChuncksList.size() - 1)
	{
		int _Head        = p_ChuncksList[_Counter] ;
		int _SumOfChunck = 0                       ;

		for (int i = 1; i <= _Head; i++)
		{
			_SumOfChunck += p_ChuncksList[_Counter + 1];

			if (_SumOfChunck > 256)
			{
				_SumOfChunck %= 256;
			}

			_Counter++;
		}

		_Result.push_back(_SumOfChunck);
		_Counter++;
	}

	return _Result;
}

int SumOfMultiples(int p_Number)
{
	int _Result = 0;

	for (int i = 0; i < p_Number; i++)
	{
		if (i % 3 == 0)
		{
			_Result += i;
		}

		if (i % 5 == 0)
		{
			_Result += i;
		}

		if (i % 7 == 0)
		{
			_Result += i;
		}
	}

	return _Result;
}

int main()
{
	std::vector<int> _TestVector = { 3, 40, 50, 60, 2, 200, 100, 3, 10, 20, 30 };
	std::vector<int> _ResultVector = SumOfChuncks(_TestVector);

	for (int a : _ResultVector)
	{
		std::cout << a << " ";
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	int _ResultSumMultiple = SumOfMultiples(11);

	std::cout << _ResultSumMultiple << std::endl;
}
