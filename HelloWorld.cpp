#include <iostream>

int dubs(int meme) {
	return (meme * 2);
}

int question3(int input) {
	std::cout << "\nEnter another integer: ";
	int secondInput;
	std::cin >> secondInput;
	std::cout << input << " + " << secondInput << " is " << (input + secondInput) << ".\n";
	std::cout << input << " - " << secondInput << " is " << (input - secondInput) << ".\n";
	return 0;
}

int main() 
{
	int input;

	std::cout << "Please input an int: ";
	std::cin >> input;

	//int doubleInput = dubs(input);

	std::cout << "Double " << input << " is " << input * 2 << "\n";
	std::cout << "Triple " << input << " is " << input * 3 << "\n";

	question3(input);

	return 0;
}