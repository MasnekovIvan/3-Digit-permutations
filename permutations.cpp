//
// Программа, которая перебирает все возможные комбинации
// 10 левых чисел * 10 центральных чисел * 10 правых чисел = 1000
// GitHub: MasnekovIvan | Twitter: @Masnekov_Ivan
//
#include "stdafx.h"
#include <iostream>


int main()
{
	// Цикл перебирающий все левые числы
	for (int leftNumber = 0; leftNumber < 10; leftNumber++)
	{
		// Цикл перебирающий все центральные числа
		for (int middleNumber = 0; middleNumber < 10; middleNumber++)
		{
			// Цикл перебирающий все правые числа
			for (int rightNumber = 0; rightNumber < 10; rightNumber++)
				std::cout << leftNumber << "-" << middleNumber << "-" << rightNumber << "\n";
		}
	}

	return 0;
}
