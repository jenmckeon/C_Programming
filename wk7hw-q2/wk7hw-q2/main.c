#include <stdio.h>
#include <stdlib.h>

char *month[13] = {"None", "Jan", "Feb", "Mar",
    "Apr", "May", "June", "July",
    "Aug", "Sept", "Oct",
    "Nov", "Dec"};

int daysPerMonth[2][13] = {{-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {-1, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

typedef struct _d {
    int day;        // 1 to 31 
    int month;      // 1 to 12 
    int year;       // any - except the same year. Doesn't seem to work if it's the same.
}dt;

void print_dt(dt d)
{
    printf("%d %s %d \n", d.day, month[d.month], d.year);
    return;
}

int leap(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 ==0) ? 1 : 0;
}

int minus(dt d1, dt d2)
{
    int y, m;
    int total_days = 0;
    
    for (y = d1.year; y >= d2.year ; y--) {
        if (y == d1.year) {
            for (m = d1.month ; m >= 1 ; m--) {
                if (m == d1.month)  total_days += d1.day;
                else                total_days += daysPerMonth[leap(y)][m];
            }
        } else if (y == d2.year) {
            for (m = 12 ; m >= d2.month ; m--) {
                if (m == d2.month)  total_days += daysPerMonth[leap(y)][m] - d2.day;
                else                total_days += daysPerMonth[leap(y)][m];
            }
        } else {
            for (m = 12 ; m >= 1 ; m--) {
                total_days += daysPerMonth[leap(y)][m];
            }
        }
        
    }
    
    return total_days;
}

int main(void)
{
    // End Date is 2 June 2014
    dt d2 = {02, 06, 2014};
    
    // Start Date is 1 June 2013
    dt d1 = {01, 06, 2013};
    
    int days;
    
    int d1_pt = 0, d2_pt = 0;
    
    if (d1.year  > d2.year)     d1_pt += 100;
    else                        d2_pt += 100;
    if (d1.month > d2.month)    d1_pt += 10;
    else                        d2_pt += 10;
    if (d1.day   > d2.day)      d1_pt += 1;
    else                        d2_pt += 1;
    
    days = (d1_pt > d2_pt) ? minus(d1, d2) : minus(d2, d1);
    
    print_dt(d1);
    print_dt(d2);
    printf("number of days between these two dates are: %d \n", days);
    
    return 0;
}