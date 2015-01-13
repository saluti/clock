/* Standard Clock v1 coded by Saluti on github */
/* Released 1/7/15 */
/*Thanks for using */
#include <stdio.h>
#include <time.h>


int main(void) {

    time_t rawtime;
    struct tm*  time_;
    
    time(&rawtime);
    time_ = localtime(&rawtime);
    
    printf("The current time is:\n");
    printf("\n"); /* to make the program look clean */
    printf("\n");
    printf("%i:%i \n", time_->tm_hour, time_->tm_min);
    printf("\n");
    printf("\n");
    printf("Rest is important! Make sure to take a break once in awhile!\n");
}
