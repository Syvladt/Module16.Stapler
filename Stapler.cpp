#include<iostream>
#include<string>

int main()
{
	setlocale(LC_ALL, "RU_ru");
	std::cout << "��������� ������� �����\n";
	std::string whole_part, frac_part;
	std::cout << "������� ����� � ������� ����� ����� ������: ";
	std::cin >> whole_part >> frac_part;
	double result = std::stod(whole_part + ',' + frac_part);
	std::cout << "����������: " << result;
}