#include <iostream>
#include <vector>

int getInteger();

int dubs(int meme) {
	return (meme * 2);
}

void vecVals(std::vector <int> meme) {

	size_t size = meme.size();
	std::cout << "\ncurrent vector: ";

	for (size_t i = 0; i < size; i++) {
		std::cout << meme[i] << " ";
	}

	std::cout << "\n";
}

void random() {
	return; //Bad practice don't do this
}

void question() {
	int meme{};
	std::cout << "\nUnassigned int * 2 = " << meme * 2 << "\n";
}

int error() {
	return 1;
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
	std::vector<int> meme;
	std::cout << "\nDeclared not initialized vector size: " << meme.size() << "\n";
	vecVals(meme);
	meme.insert(meme.begin(), 3);
	std::cout << "\nInitialized with 3 and size of: " << meme.size() << "\n";
	vecVals(meme);


	int input;

	std::cout << "Please input an int: ";
	std::cin >> input;

	//int doubleInput = dubs(input);

	std::cout << "Double " << input << " is " << input * 2 << "\n";
	std::cout << "Triple " << input << " is " << input * 3 << "\n";

	question3(input);

	error();

	getInteger();

	random();

	return 0;
}