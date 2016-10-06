#include <stdio.h>
#include <stdlib.h>

//Prototypes!
struct date read_date();
int days_in(int the_month, int the_year);
struct date add_days(struct date from, int days);
unsigned concatenate(unsigned x, unsigned y);
struct date most_old_between(struct date date1, struct date date2);
struct date most_recent_between(struct date day1, struct date day2);
int is_same_date(struct date day1, struct date day2);
int days_between(struct date day1, struct date day2);

//user defined datatype
struct date{
	int day, month, year;
};

//Functions definitions
//gets the date from user
struct date read_date(){
    struct date input;
    scanf(" %2d %2d %4d/n", &input.day, &input.month, &input.year);
    return input;
}

//how many days in a month
int days_in(int the_month, int the_year){
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
			return (the_year % 4 == 0  &&
					the_year != 0 ? 29 : 28);
        default: return -1;
	}
}

//add days to date
struct date add_days(struct date from, int days){
	//3 outcomes: day++ month++ year++
    while (days > 0){
        if (from.day + 1 > days_in(from.month, from.year)){
            if (from.month == 12){
                from.year++;
                from.month = 1;
                from.day = 1;
                days--;
            } else {
            from.month++;
            from.day = 1;
            days--;
        	}
		} else {
			from.day++;
        	days--;
		}
	}
	return from;
}



//concatenate 2 numbers
unsigned concatenate(unsigned x, unsigned y) {
    unsigned pow = 10;
    while(y >= pow)
        pow *= 10;
    return x * pow + y;
}

//Get oldest date
struct date most_old_between(struct date date1, struct date date2){
	int a, b;
	a = concatenate(date1.year, date1.month);
	a = concatenate(a, date1.day);
	b = concatenate(date2.year, date2.month);
	b = concatenate(b, date2.day);
	return (a<=b) ? date1 : date2;
}

//Get most recent date
struct date most_recent_between(struct date date1, struct date date2){
	int a, b;
	a = concatenate(date1.year, date1.month);
	a = concatenate(a, date1.day);
	b = concatenate(date2.year, date2.month);
	b = concatenate(b, date2.day);
	return (a>=b) ? date1 : date2;
}

//return 0 if ==
int is_same_date(struct date date1, struct date date2){
	if ((date1.year == date2.year) && (date1.month == date2.month) && (date1.day == date2.day)){
		return 0;
	} else {
		return 1;
	}
}

//days between 2 dates
int days_between(struct date date1, struct date date2){
	struct date old = most_old_between(date1, date2);
	struct date new = most_recent_between(date1, date2);
	int daysCounter = 0;
    while (is_same_date(old, new) != 0) {
		old = add_days(old, 1);
        daysCounter++;
    }
    return daysCounter;
    }

int main(void){
	printf("Give me a date format dd mm yyyy\n");
    struct date a = read_date();
    printf("read success\n");
    printf("%d %d %d\n", a.day, a.month, a.year);
    a = add_days(a, 366);
    printf("We add 366 days: %d %d %d\n", a.day, a.month, a.year);

    struct date aaa;
    aaa.year = 2000;
    aaa.month = 3;
    aaa.day = 3;

	struct date bbb;
    bbb.year = 2000;
    bbb.month = 2;
    bbb.day = 2;

	struct date mostrecent = most_recent_between(aaa, bbb);
	printf("Most recent date is: %d %d %d\n", mostrecent.day, mostrecent.month, mostrecent.year);

	printf("Are same date?: %d\n", is_same_date(aaa, bbb));

	printf("Theere are %d days between the dates.\n", days_between(aaa, bbb));
    }
