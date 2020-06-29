#include <iostream>
#include <iomanip>



int main() {
	int daysn, firstdaymonth, year;

	std::cout << "What year do you want the calendar for? ";
	std::cin >> year;
	std::cout << std::endl;


	// Calculate the first day of a year
	int x1, x2, x3;
	x1 = (year - 1) / 4;
	x2 = (year - 1) / 100;
	x3 = (year - 1) / 400;
	firstdaymonth = ((year + x1 - x2 + x3) % 7) - 1; // this is some unknown black magic


	// Start to print out the result
	std::cout << "        " << year << std::endl;

	// Loop over all months
	int month = 1;
	while(month <= 12) {
		if(month == 1) {
			daysn = 31;
			std::cout << "January" << std::endl;
		} else if(month == 2) {
			daysn = 28;
			std::cout << "February" << std::endl;
		} else if(month == 3) {
			daysn = 31;
			std::cout << "March" << std::endl;
		} else if(month == 4) {
			daysn = 30;
			std::cout << "April" << std::endl;
		} else if(month == 5) {
			daysn = 31;
			std::cout << "May" << std::endl;
		} else if(month == 6) {
			daysn = 30;
			std::cout << "June" << std::endl;
		} else if(month == 7) {
			daysn = 31;
			std::cout << "July" << std::endl;
		} else if(month == 8) {
			daysn = 31;
			std::cout << "August" << std::endl;
		} else if(month == 9) {
			daysn = 30;
			std::cout << "Semptember" << std::endl;
		} else if(month == 10) {
			daysn = 31;
			std::cout << "October" << std::endl;
		} else if(month == 11) {
			daysn = 30;
			std::cout << "November" << std::endl;
		} else if(month == 12) {
			daysn = 31;
			std::cout << "December" << std::endl;
		}

		std::cout << " M  T  W  T  F  S  S\n____________________" << std::endl;

		int day = 1;
		int i = firstdaymonth;
		while(i > 0) {
			std::cout << "   ";
			i--;
		}

		// Create calendar
		while(day <= daysn) {
			std::cout << std::setw(2) << day << " ";
			// If more than 5 weeks in a month, initialize "firstdaymonth" to 0
			if(firstdaymonth == 6) {
				std::cout << std::endl;
				firstdaymonth = 0;
			} else {
				firstdaymonth++;
			}
			day++;
		}

		if(month != 12) {
			std::cout << "\n\n" << std::endl;
		}
		month++;
	}

	std::cout << std::endl;
}