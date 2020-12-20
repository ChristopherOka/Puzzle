#include <iostream>

void puzzle() {
	
		std::string test_number; //declare the user inputted number value as a string
		std::cout << "How to solve this puzzle:\n" << "Input a 4 digit number. If that number meets the following criteria, you've solved the puzzle!\n"
			<< "Criteria:\n" << "1. No two digits in the number are the same.\n" << "2. The thousands digit must be 3 times the hundreds digit.\n"
			<< "3. The number must be an odd number.\n" << "4. The sum of all digits in the number is 27.\n"; //read the rules
		std::cout << "Understand?\n";
	start: //where the code jumps back to on a wrong answer
		std::cout << "Now enter a number: ";
		std::cin >> test_number; //user enters their guess number
		std::cout << std::endl;

		int first_digit = test_number[0] - 48; //these 4 lines convert each digit in the string of numbers into its own integer
		int second_digit = test_number[1] - 48;
		int third_digit = test_number[2] - 48;
		int fourth_digit = test_number[3] - 48;

		int integer_number = (first_digit * 1000) + (second_digit * 100) + (third_digit * 10) + (fourth_digit); //converts the 4 integer digits into an integer number

		if (test_number[0] == test_number[1] || test_number[0] == test_number[2] || test_number[0] == test_number[3] 
			|| test_number[1] == test_number[2] || test_number[1] == test_number[3] || test_number[2] == test_number[3]) { //checks if any of the digits are the same
			std::cout << "This number does not work! Try again.\n";
			goto start; //jumps back to the start
		}
		if (first_digit != third_digit * 3) { //checks if the first digit is 3 times the third digit
			std::cout << "This number does not work! Try again.\n";
			goto start;
		}
		if (integer_number % 2 == 0) { //checks if the number is even
			std::cout << "This number does not work! Try again.\n";
			goto start;
		}
		if (first_digit + second_digit + third_digit + fourth_digit != 27) { //checks if the digits in the number add up to 27
			std::cout << "This number does not work! Try again.\n";
			goto start;
		}
		std::cout << "You solved the puzzle!\n"; 
	}


int main() {
	puzzle(); 
}
