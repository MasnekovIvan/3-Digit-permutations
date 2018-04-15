//
// Номера отделов
// 1) Пожарные. 2) Полиция. 3) Скорая помощь.
// Каждый номер в пределах от 1 до 7. Номера не повторяются
// Пожарные # + Полиция # + Скорая помощь # = 12.
// Номер Полиции всегда четный.
// GitHub: MasnekovIvan | Twitter: @Masnekov_Ivan
//
#include "stdafx.h"
#include <iostream>


int main()
{
	// Цикл перебирающий номер Пожарных
	for (int fireDepartment = 1; fireDepartment <= 7; fireDepartment++)
	{
		// Цикл перебирающий номер Полиции, только четные числа
		for (int policeDepartment = 1; policeDepartment <= 7; policeDepartment += 1)
		{
			// Цикл перебирающий номер Скорой помощи
			for (int erDepartment = 1; erDepartment <= 7; erDepartment++)
				// Делаем выборку по все параметрам из задания. Повторы, сумма равно 12
        // и только четные числа для номера Полиции
				if ((fireDepartment != policeDepartment) &&
					(fireDepartment != erDepartment) &&
					(policeDepartment != erDepartment) &&
					(fireDepartment + policeDepartment + erDepartment == 12) &&
					(policeDepartment % 2 == 0))
					std::cout << fireDepartment << "-" << policeDepartment << "-" << erDepartment << "\n";
				
			/* Другой вариант решения
				// Отсеивание повторяющиеся номера
				if (fireDepartment != policeDepartment && fireDepartment != erDepartment && policeDepartment != erDepartment)
				{
					// Вывод комбинаций которые в сумме равняются 12
					if (fireDepartment + policeDepartment + erDepartment == 12)
					{
						std::cout << fireDepartment << "-" << policeDepartment << "-" << erDepartment << "\n";
					}
				} */
		}
	}

	return 0;
}

