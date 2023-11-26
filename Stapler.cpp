#include<iostream>
#include<string>

int main()
{
	setlocale(LC_ALL, "RU_ru");
	std::cout << "Сшиватель дробных чисел\n";
	std::string whole_part, frac_part;
	std::cout << "Введите целую и дробную часть через пробел: ";
	std::cin >> whole_part >> frac_part;
	double result = std::stod(whole_part + ',' + frac_part);
	std::cout << "Получилось: " << result;
}