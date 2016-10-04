#include <stdio.h>
#include <stdlib.h>

//Prototypes!
struct date read_date();
int days_in(int the_month, int the_year);
struct date add_days(struct date from, int days);
struct date most_recent_between(struct date day1, struct date day2);
struct date is_same_date(struct date day1, struct date day2);
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
    while (days > 0){
        if (from.day + 1 > days_in(from.month, from.year)){
            if (from.month == 12){
                from.year++;
                from.month = 1;
                from.day = 1;
                days--;
                break;
                //prevent incrementing month and day when year++
            }
            from.month++;
            from.day = 1;
            days--;
        }
        from.day++;
        days--;
    }
    return from;
}

/*
int days_between(struct date day1, struct date day2){

    while (dates are different) {
        add 1 date to older date
        increment a counter
    }
    return counter
    }
*/
int main(void){
    /*
    printf("dfer\n");
    struct date a = read_date();
    printf("read success\n");
    printf("%d %d %d\n", a.day, a.month, a.year);
    a = add_days(a, 366);
    printf("%d %d %d\n", a.day, a.month, a.year);
    */
    struct date aaa;
    aaa.year = 2000;
    aaa.month = 1;
    aaa.day = 1;


    struct date bbb;
    bbb.year = 2000;
    bbb.month = 1;
    bbb.day = 1;

    printf("%d\n", days_between(aaa, bbb));
    printf("%d\n", days_between(bbb, aaa));

    }
