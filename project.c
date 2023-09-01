/*Tempreture convirsion calculator*/
#include<stdio.h>
int main()
      {
      int op,choice;
      float num1,conv_temp;
      do{
      
       printf("\t\t|*******************************************************|\n");
       printf("\t\t|**********⏸️*TEMPRETURE CONVERSION CALCULATOR*⏸️*********|\n");
       printf("\t\t|***************|***************************************|");
       
       printf("\n\t\t|\t\t|\t\t\t\t\t|");
        
       printf("\n\t\t|\tSr.No.\t|\t\tMenu\t\t\t|");
       printf("\n\t\t|\t\t|\t\t\t\t\t|");
       printf("\n\t\t|---------------|---------------------------------------|");
       printf("\n\t\t|\t(1).\t|\tCelsius to fahrenheit\t\t|");
        printf("\n\t\t|\t\t|\t\t\t\t\t|");
       printf("\n\t\t|\t(2).\t|\tCelsius to kelvin\t\t|");
        printf("\n\t\t|\t\t|\t\t\t\t\t|");
       printf("\n\t\t|\t(3).\t|\tFahrenheit to celsius\t\t|");
        printf("\n\t\t|\t\t|\t\t\t\t\t|");
       printf("\n\t\t|\t(4).\t|\tFahrenheit to kelvin\t\t|");
        printf("\n\t\t|\t\t|\t\t\t\t\t|");
       printf("\n\t\t|\t(5).\t|\tKelvin to fahrenheit\t\t|");
        printf("\n\t\t|\t\t|\t\t\t\t\t|");
       printf("\n\t\t|\t(6).\t|\tKelvin to celsius\t\t|");
        printf("\n\t\t|\t\t|\t\t\t\t\t|");
       printf("\n\t\t|_______________|_______________________________________|\n");
       printf("\n\t\t\t* which operation you want to perform :");
       scanf("%d",&op);
       
       switch(op)
       {
            case 1:
            
            printf("\n\t\t\t* Enter the tempreture in celsius :");
            scanf("%f",&num1);
            conv_temp=(num1*9/5)+32;
             printf("\n\t\t\t\t-----------------------------------------");
            printf("\n\t\t\t\t|\t%f C = %f  F\t|\n",num1,conv_temp);
             printf("\t\t\t\t-----------------------------------------\n\n");
           
            break;
            
            case 2:
           
            printf("\n\t\t\t* Enter the tempreture in celsius :");
            scanf("%f",&num1);
            conv_temp=num1+273.15;
             printf("\n\t\t\t\t-----------------------------------------");
            printf("\n\t\t\t\t|\t%f C = %f K\t|\n",num1,conv_temp);
             printf("\t\t\t\t-----------------------------------------\n\n");
           
            break;
            
            case 3:
           
            printf("\n\t\t\t* Enter the tempreture in Fahrenheit :");
            scanf("%f",&num1);
            conv_temp=(num1-32)*5/9;
            printf("\n\t\t\t\t-----------------------------------------");
            printf("\n\t\t\t\t|\t%f F = %f C\t|\n",num1,conv_temp);
             printf("\t\t\t\t-----------------------------------------\n\n");
           
            break;
           
            case 4:
            printf("\n\t\t\t* Enter the tempreture in Fahrenheit :");
            scanf("%f",&num1);
            conv_temp=(num1-32)*5/9+273.15;
             printf("\n\t\t\t\t-----------------------------------------");
            printf("\n\t\t\t\t|\t%f F = %f K\t|\n",num1,conv_temp);
             printf("\t\t\t\t-----------------------------------------\n\n");
           
            break;
            
            case 5:
            
            printf("\n\t\t\t* Enter the tempreture in Kelvin :");
            scanf("%f",&num1);
            conv_temp=(num1-273.15)*9/5+32;
             printf("\n\t\t\t\t-----------------------------------------");
            printf("\n\t\t\t\t|\t%fK = %fF\t|\n",num1,conv_temp);
             printf("\t\t\t\t-----------------------------------------\n\n");
            
            break;
            
            case 6:
            
            printf("\n\t\t\t* Enter the tempreture in Kelvin :");
            scanf("%f",&num1);
            conv_temp=num1-273.15;
             printf("\n\t\t\t\t|---------------------------------------|");
            printf("\n\t\t\t\t|\t%fK = %fC\t|\n",num1,conv_temp);
            
             printf("\t\t\t\t|---------------------------------------|\n\n");
            
            break;
           
           default:
          
          printf("\n\t\t\t* Enter valid Input\n");
          }
          printf("\n\t\t\t* Do you want to perform other operation =>\n\t\t\tPress-1 for yes\t\t\tPress-0 for No\n");
          scanf("\t\t%d",&choice);
         
          }while(choice==1);
            
      return 0;
       }
      

