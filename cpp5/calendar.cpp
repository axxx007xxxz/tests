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

	// Check if the year is a leap year
	bool leap;
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		leap = true;
	}


	// Start to print out the result
	std::cout << "        " << "\e[1m" << year << "\e[0m" << std::endl;

	// Loop over all months
	int month = 1;
	std::string monthname;
	while(month <= 12) {
		if(month == 1) {
			daysn = 31;
			monthname = "January";
		} else if(month == 2) {
			if(leap == true) {
				daysn = 29;
			} else {
				daysn = 28;
			}
			monthname = "February";
		} else if(month == 3) {
			daysn = 31;
			monthname = "March";
		} else if(month == 4) {
			daysn = 30;
			monthname = "April";
		} else if(month == 5) {
			daysn = 31;
			monthname = "May";
		} else if(month == 6) {
			daysn = 30;
			monthname = "June";
		} else if(month == 7) {
			daysn = 31;
			monthname = "July";
		} else if(month == 8) {
			daysn = 31;
			monthname = "August";
		} else if(month == 9) {
			daysn = 30;
			monthname = "Semptember";
		} else if(month == 10) {
			daysn = 31;
			monthname = "October";
		} else if(month == 11) {
			daysn = 30;
			monthname = "November";
		} else if(month == 12) {
			daysn = 31;
			monthname = "December";
		}
		std::cout << monthname << std::endl;

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