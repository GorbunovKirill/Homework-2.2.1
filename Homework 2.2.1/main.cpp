# include<iostream>
# include<string>

enum class seasons
{
	������ = 1,
	�������,
	����,
	������,
	���,
	����,
	����,
	������,
	��������,
	�������,
	������,
	�������
};



int main() {
	setlocale(LC_ALL, "Russian");

	int p;

	static_cast<seasons>(p);
	do {
		std::cin >> p;

		static_cast<seasons>(p);

		switch (p) {
		case(static_cast<int>(seasons::������)):
			std::cout << "������" << std::endl;
			break;
		case(static_cast<int>(seasons::�������)):
			std::cout << "�������" << std::endl;
			break;
		case(static_cast<int>(seasons::����)):
			std::cout << "����" << std::endl;
			break;
		case(static_cast<int>(seasons::������)):
			std::cout << "������" << std::endl;
			break;
		case(static_cast<int>(seasons::���)):
			std::cout << "���" << std::endl;
			break;
		case(static_cast<int>(seasons::����)):
			std::cout << "����" << std::endl;
			break;
		case(static_cast<int>(seasons::����)):
			std::cout << "����" << std::endl;
			break;
		case(static_cast<int>(seasons::������)):
			std::cout << "������" << std::endl;
			break;
		case(static_cast<int>(seasons::��������)):
			std::cout << "��������" << std::endl;
			break;
		case(static_cast<int>(seasons::�������)):
			std::cout << "�������" << std::endl;
			break;
		case(static_cast<int>(seasons::������)):
			std::cout << "������" << std::endl;
			break;
		case(static_cast<int>(seasons::�������)):
			std::cout << "�������" << std::endl;
			break;
		case(0):
			std::cout <<"�� ��������" << std::endl;
			break;

		default:
			std::cout << "������������ �����!" << std::endl;
		}
	} while (p != 0);

	return 0;



}