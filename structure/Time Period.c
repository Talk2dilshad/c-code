#include <stdio.h>
/* create structure for time
  create prototype function
  take input (Time Start & Stop Time) */

  struct time
  {
     int hr;
     int min;
     int sec;
  };

  void difftimeperiod(struct time t1,struct time t2,struct time *temp);
  int main()
  {
     struct time start,stop,diff;
     printf("\nEnter hour,min&sec respectively : \n");
     printf("Enter Start Time : ");
     scanf("%d %d %d",&start.hr,&start.min,&start.sec);

     printf("Enter Stop Time : ");
     scanf("%d %d %d",&stop.hr,&stop.min,&stop.sec);

     difftimeperiod(start,stop,&diff);
     printf("Difference between Time Period : \n");
     printf("%d : %d: %d - %d : %d : %d",start.hr,start.min,start.sec,stop.hr,stop.min,stop.sec);
     printf(" = %d : %d : %d\n",diff.hr,diff.min,diff.sec);
     return 0;
  }
  void difftimeperiod(struct time start,struct time stop,struct time *diff)
  {
    while (stop.sec > start.sec)
    {
      --start.min;
      start.sec += 60;
    }
    diff->sec= start.sec-stop.sec;
    while (stop.min > start.min)
    {
       --start.hr;
       start.min += 60;
    }
   diff->min= start.min - stop.min;
   diff->hr= start.hr-stop.hr; 
  }

  