# include<iostream>
# include<string>

enum class seasons
{
	выход,
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
	seasons s;

	static_cast<seasons>(p);
	do {
		std::cin >> p;

		s=static_cast<seasons>(p);

		switch (s) {
		case seasons::€нварь:
			std::cout << "январь" << std::endl;
			break;
		case seasons::февраль:
			std::cout << "‘евраль" << std::endl;
			break;
		case seasons::март:
			std::cout << "ћарт" << std::endl;
			break;
		case seasons::апрель:
			std::cout << "јпрель" << std::endl;
			break;
		case seasons::май:
			std::cout << "ћай" << std::endl;
			break;
		case seasons::июнь:
			std::cout << "»юнь" << std::endl;
			break;
		case seasons::июль:
			std::cout << "»юль" << std::endl;
			break;
		case seasons::август:
			std::cout << "јвгуст" << std::endl;
			break;
		case seasons::сент€брь:
			std::cout << "—ент€брь" << std::endl;
			break;
		case seasons::окт€брь:
			std::cout << "ќкт€брь" << std::endl;
			break;
		case seasons::но€брь:
			std::cout << "Ќо€брь" << std::endl;
			break;
		case seasons::декабрь:
			std::cout << "ƒекабрь" << std::endl;
			break;
		case seasons::выход:
			std::cout <<"ƒо свидани€" << std::endl;
			break;

		default:
			std::cout << "Ќеправильный номер!" << std::endl;
		}
	} while (s != seasons::выход);

	return 0;



}