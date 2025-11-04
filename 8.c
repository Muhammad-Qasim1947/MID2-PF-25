// Question#6: 
//An analog clock is a tool for reading the time of day. The shortest clock needle 
// indicates the hour, a longer needle indicates the minutes, and the longest needle
// indicates the seconds. The clocks like the ones you can see in the picture below
// might be a real life example of a nested loop. What do you think? The first and
// outside loop would be the second’s needle, which after first completion moves the
// inside loop: minute’s needle. Then, after minute’s needle first completion, we
// moves the hour needle, which loops inside minute loop.
// Your 'C' program will take start and end time from user in an analog format and your 
// challenge is to design a digital clock that will display Hours, Minutes and Seconds on a console 
// from user provided start and end time. The program sample input/output will be as follows:
// Sample Input:
// Enter Small Needle : 10
// Enter large Needle: 12
// Enter largest Needle: 07
// Sample Output:
// 10: 00: 35
// 2021

#include <stdio.h>

int main() {
    int Hstart, Mstart, Sstart;
    int Hend, Mend, Send;

    printf("Enter The Starting Hour : ");
    scanf("%d", &Hstart);
    printf("Enter The Starting Minute : ");
    scanf("%d", &Mstart);
    printf("Enter The Starting Second : ");
    scanf("%d", &Sstart);

    printf("Enter The Ending Hour : ");
    scanf("%d", &Hend);
    printf("Enter The Ending Minute : ");
    scanf("%d", &Mend);
    printf("Enter The Ending Second : ");
    scanf("%d", &Send);

    for (int h = Hstart; h <= Hend; h++) {
        int startM, endM;
        if (h == Hstart) {
            startM = Mstart;
        } else {
            startM = 0;
        }
        if (h == Hend) {
            endM = Mend;
        } else {
            endM = 59;
        }

        for (int m = startM; m <= endM; m++) {
            int startS, endS;
            if (h == Hstart && m == Mstart) {
                startS = Sstart;
            } else {
                startS = 0;
            }
            if (h == Hend && m == Mend) {
                endS = Send;
            } else {
                endS = 59;
            }

            for (int s = startS; s <= endS; s++) {
                printf("%02d:%02d:%02d\n", h, m, s);
            }
        }
    }

    return 0;
}
