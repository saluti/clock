/* Standard Clock v1 coded by Saluti on github */
/* Released 1/7/15 */
/*Thanks for using */
#include <stdio.h> /* To include stdio.h */
#include <time.h> /* To include time.h */


int main(void) {

    time_t rawtime;
    struct tm*  time_;
    
    time(&rawtime); /* Uses time.h */
    time_ = localtime(&rawtime); /*To find the user's local time! */
    
    printf("The current time is:\n"); /* text to display the current time */
    printf("\n"); /* to make the program look clean */
    printf("\n");
    printf("%i:%i \n", time_->tm_hour, time_->tm_min); /*shows as hour:min no seconds */
    printf("\n");/* to make the program look clean */
    printf("\n");
    printf("Rest is important! Make sure to take a break once in awhile!\n"); /*reminder!*/
} /*end of code */
