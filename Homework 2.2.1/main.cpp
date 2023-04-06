# include<iostream>
# include<string>

enum class seasons
{
	€нварь = 1,
	февраль,
	март,
	апрель,
	май,
	июнь,
	июль,
	август,
	сент€брь,
	окт€брь,
	но€брь,
	декабрь
};



int main() {
	setlocale(LC_ALL, "Russian");

	int p;

	static_cast<seasons>(p);
	do {
		std::cin >> p;

		static_cast<seasons>(p);

		switch (p) {
		case(static_cast<int>(seasons::€нварь)):
			std::cout << "январь" << std::endl;
			break;
		case(static_cast<int>(seasons::февраль)):
			std::cout << "‘евраль" << std::endl;
			break;
		case(static_cast<int>(seasons::март)):
			std::cout << "ћарт" << std::endl;
			break;
		case(static_cast<int>(seasons::апрель)):
			std::cout << "јпрель" << std::endl;
			break;
		case(static_cast<int>(seasons::май)):
			std::cout << "ћай" << std::endl;
			break;
		case(static_cast<int>(seasons::июнь)):
			std::cout << "»юнь" << std::endl;
			break;
		case(static_cast<int>(seasons::июль)):
			std::cout << "»юль" << std::endl;
			break;
		case(static_cast<int>(seasons::август)):
			std::cout << "јвгуст" << std::endl;
			break;
		case(static_cast<int>(seasons::сент€брь)):
			std::cout << "—ент€брь" << std::endl;
			break;
		case(static_cast<int>(seasons::окт€брь)):
			std::cout << "ќкт€брь" << std::endl;
			break;
		case(static_cast<int>(seasons::но€брь)):
			std::cout << "Ќо€брь" << std::endl;
			break;
		case(static_cast<int>(seasons::декабрь)):
			std::cout << "ƒекабрь" << std::endl;
			break;
		case(0):
			std::cout <<"ƒо свидани€" << std::endl;
			break;

		default:
			std::cout << "Ќеправильный номер!" << std::endl;
		}
	} while (p != 0);

	return 0;



}