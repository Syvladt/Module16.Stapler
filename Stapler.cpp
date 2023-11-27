#include<iostream>
#include<string>

int main()
{
	std::cout << "Stapler\n";
	std::string whole_part, frac_part;
	std::cout << "Input whole and fractional parts separated by a space: ";
	std::cin >> whole_part >> frac_part;
	double result = std::stod(whole_part + '.' + frac_part);
	std::cout.precision(whole_part.size() + frac_part.size() + 1);
	std::cout << "Result: " << result;
}