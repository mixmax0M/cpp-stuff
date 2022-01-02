#include <iostream>

int main() {
	int gender;
	int scsystem;
	int age;
	int activity;
	float weight;
	float height;
	float lbs;
	float ft;
	float in;
	float cal;


	std::cout << "\n========================\n"
		<< "Calorie Calculator\n"
		<< "Gender\n"
		<< "[1] Male\n"
		<< "[2] Female\n"
		<< "Selection: ";
	std::cin >> gender;
	std::cout << "========================\n"
		<< "\nSystem\n"
		<< "[1] Metric\n"
		<< "[2] Imperial\n"
		<< "Selection: ";
	std::cin >> scsystem;
	std::cout << "========================\n"
		<< "Enter your age: ";
	std::cin >> age;

	switch (scsystem)
	{
	case 1:
		std::cout << "Enter your weight: ";
		std::cin >> weight;
		std::cout << "Enter your height: ";
		std::cin >> height;
		break;
	case 2:
		std::cout << "Enter your weight: ";
		std::cin >> lbs;
		std::cout << "Enter your height (ft): ";
		std::cin >> ft;
		std::cout << "Enter your height (in): ";
		std::cin >> in;

		weight = lbs / 2.205;
		height = (ft * 30.48) + (in + 2.54);
		break;
	default:
		break;
	}

	if (gender == 1) {
		cal = 66.47 + (13.7 * weight) + (5.0 * height) - (6.8 * age);
	} else if (gender == 2) {
		cal = 65.51 + (9.6 * weight) + (1.8 * height) - (4.7 * age);
	}

	std::cout << "\n========================\n"
		<< "Activity\n"
		<< "[1] None\n"
		<< "[2] Little to None\n"
		<< "[3] Light exercise (1 - 3 Days/Week)\n"
		<< "[4] Moderate exercise (3 - 5 Days/Week)\n"
		<< "[5] Intensive exercise (6 - 7 Days/Week)\n"
		<< "[6] [6] Daily intensive exercise (Everyday)\n"
		<< "Selection: ";
	std::cin >> activity;

	switch (activity)
	{
	case 1:
		cal = cal;
		break;
	case 2:
		cal = cal * 1.2;
		break;
	case 3:
		cal = cal * 1.375;
		break;
	case 4:
		cal = cal * 1.55;
		break;
	case 5:
		cal = cal * 1.725;
		break;
	case 6:
		cal = cal * 1.9;
		break;
	default:
		cal = cal * 1;
		std::cout << "\n Invalid Selection.\n";
		break;
	}

	std::cout << "\n========================\n"
		<< "Your basal metabolic rate is " << cal << ".\n"
		<< "========================\n";

	system("pause");
	return 0;
}