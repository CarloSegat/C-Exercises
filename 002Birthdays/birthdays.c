/* This program reads in a date (which must be in the 20th century - this software is NOT millenium-compliant!) and prints out the day of the week corresponding to that date */

#include <stdio.h>
/*
#define allows the definition of MACROS (is used to declare constants).
A macro is a rule or pattern that specifies how a certain input sequence should
be mapped to a replacement output sequence.
*/
#define	DAYS_PER_YEAR	365


struct date
//A struct is a user defined data structure
{
	int day, month, year;
};

struct date read_date(void)
{

	struct date dateIn;

	scanf("%d %d %d", &dateIn.day,
		&dateIn.month,
		&dateIn.year);
	//reads formatted input from stdin (standard input implemented as keyboard
	//read data is saved into dateIn fields.
	//whitespaces (include tabs) are ignored.

	return dateIn;
}

int days_in(int the_month, int the_year)  //returns number of days in a month.
{
	switch (the_month)
	{
		case 9:
		case 4:
		case 6:
		case 11:
			return 30;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 2:
		// boolean ? value if true : value if false
			return (the_year % 4 == 0  &&
					the_year != 0 ? 29 : 28);
	}
}

long get_day_number(struct date toDate)
//return the number of day passed since 1 1 0
{
	long month_no, no_of_days = 0;

	if (toDate.year > 0)
	//days passed since 1.1.0 and year you are born
		no_of_days =
		  (long)(toDate.year) * DAYS_PER_YEAR +
			(toDate.year - 1) / 4;
	//days passed since 1.1.yearYouAreBorn and 1.monthYouAreBorn
	for (month_no = 1 ; month_no < toDate.month ;
		month_no++)
		no_of_days +=
			days_in(month_no, toDate.year);
	//adding the remaining days
	return no_of_days + toDate.day;
}

void write_day(int dow)
{
	switch (dow)
	{
		case 0 :
			puts("Sunday");
			//puts writes a string to stdout,not including \0
			break;
		case 1 :
			puts("Monday");
			break;
		case 2 :
			puts("Tuesday");
			break;
		case 3 :
			puts("Wednesday");
			break;
		case 4 :
			puts("Thursday");
			break;
		case 5 :
			puts("Friday");
			break;
		case 6 :
			puts("Saturday");
			break;
	}
}

int main(int argc, char *argv[])
{
	char reply;
	struct date birthday;  //birthday is like a clas with 3 fields
	long no_of_days;

	do
	{

		printf("Please enter the date of your ");
		printf("birth, in the form: dd mm yy\n");

		birthday = read_date();  //return a birthday struct
		no_of_days = get_day_number(birthday); //days passed since Jesus born
		printf("You were born on a ");
		write_day(no_of_days % 7);
		printf("Do you want to do that again? ");
		reply = getchar();
	} while (reply == 'y' || reply == 'Y');

	return 0; // Signals a successful completion
}
