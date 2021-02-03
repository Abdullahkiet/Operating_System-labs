#include <stdio.h>

// int main()
// {

// //Hello World in C    

//   printf("Hello, World");

// }

// Printing Name by user Input

  // char name[10]="Abdullah";
  // scanf("%s",&name); //for user input and %s for string
  // printf("Name is :%s",name); 

  //printf("%s",name); //for output
    
//Addition of Two Numbers

  // int a,b,c;

  // printf("Enter two numbers:"); 
  // scanf("%d %d",&a,&b);
  // c=a+b;
  // printf("The Addition of two numbers is: %d",c); 
  // return 0;

  // printf("Enter 1st numbers:\n"); 
  // scanf("%d ",&a);
  // printf("Enter 2nd numbers:"); 
  // scanf("%d ",&b);
  // c=a+b;
  // printf("The Addition of two numbers is: %d",c); 
  // return 0;
//}


// Calculate Avg Hard Code


// int main() {
//    int i,sum;
//    int a[] = {5,5,5,5,5};
 
//    sum = 0;
   
//    for(i = 0; i < 5; i++) {
//       sum += a[i];
//    }

//    printf("Average = %d\n", sum/5);
//    return 0;
// }

// Calculate avg user input practice (not working correctly)

// int main() {
//    int i,sum;
//    int a[5];
 
//    sum = 0;
   
//    for(i = 0; i < 5; i++) {
//       printf("Enter the numbers:");
//       scanf("%d ",&a[i]);
//       sum += a[i];
//    }

//    printf("Average = %d\n", sum/5);
//    return 0;
// }

// Calculate Avg User input (working)

// int i,n,sum=0;
// 	float avg;
// 	printf("Input the 5 numbers : \n");
// 	for (i=1;i<=5;i++)
// 	{
//         printf("Number-%d :",i);

// 		scanf("%d",&n);
// 		sum +=n;
// 	}
// 	avg=sum/10.0;
// 	printf("The sum of 5 no is : %d\nThe Average is : %f\n",sum,avg);

// }

//Task01 Q1

// #include <stdio.h>
// int main() 

// {
//     int n, i;
//     float num[100], sum = 0, avg;

//     printf("Enter the numbers of elements: ");
//     scanf("%d", &n);

//     while (n > 100 || n < 1) {
//         printf("Error! number should be in range of (1-100).\n");
//         printf("Enter the number again: ");
//         scanf("%d", &n);
//     }

//     for (i = 0; i < n; ++i) {
//         printf("%d. Enter number: ", i + 1);
//         scanf("%f", &num[i]);
//         sum += num[i];
//     }

//     avg = sum / n;
//     printf("Average = %.2f", avg);
//     return 0;
// }


//Task01 Q2

// #include <stdio.h>

// int main()
// {

//     int n1, n2, mul;  
//     float divide;
  
//     printf("Input 1st number: ");  
//     scanf("%d", &n1);  

//     printf("Input 2nd number: ");  
//     scanf("%d",&n2);  
  
   
//     mul = n1 * n2;  
//     divide = (float)n1 / n2;  
   
//     printf("The product of the given numbers is : %d\n", mul);  
//     printf("The quotient of the given numbers : %f\n", divide);  
    
//     return 0;   
// }

//Task01 Q3


// #include <stdio.h>  

// int main()
// {
    
//     for(int i=1;i<=5;i++)  
//     {  
//         for(int j=1;j<=i;j++)  
//         {  
//             printf("* ");  
//         }  
//         printf("\n");  
//     }  
//     return 0;  
// }

//Task01 Q4


// #include <stdio.h>   
// int main()
// {
//     int m, n, p, q, i, j, k, sum = 0;
//     int A[10][10], B[10][10], C[10][10];
//     printf("Enter number of rows and columns of A matrix\n");
//     scanf("%d %d", &m, &n);
//     printf("Enter elements of A matrix\n");
//     for (i = 0; i < m; i++)
//     for (j = 0; j < n; j++)
//     scanf("%d", &A[i][j]);
//     printf("Enter number of rows and columns of B matrix\n");
//     scanf("%d %d", &p, &q);
//     if (n != p)
//     printf("The multiplication of matrix not possible \n");
//     else
//     {
//         printf("Enter elements of B matrix\n");
//         for (i = 0; i < p; i++)
//         for (j = 0; j < q; j++)
//         scanf("%d", &B[i][j]);
//         for (i = 0; i < m; i++) 
//         {
//             for (j = 0; j < q; j++) 
//             {
//                 for (k = 0; k < p; k++) 
//                 {
//                     sum = sum + A[i][k]*B[k][j];
//                 }
//                 C[i][j] = sum;
//                 sum = 0;
//             }
//         }
//         printf("Product of the matrices:\n");
//         for (i = 0; i < m; i++) 
//         {
//             for (j = 0; j < q; j++)
//             printf("%d\t", C[i][j]);
//             printf("\n");
//         }
//     }
//     return 0;
// }


// Class02

//Functions

//Find out Maximum number


// int maxnum(int num1, int num2)
// {
//   int max;
//   if (num1 > num2)
//   {
//     max=num1;
//   }
//   else
//   {
//     max=num2;
//   }

//   return max;
// }

// int main()
// {
//   int a=5, b=4, result;
//   result = maxnum(a,b);
//   printf("Maximum Number is: %d \n", result);

// }
  

//Lab 3

// Pointers

// int main()

// {
//   int var = 20;
//   int *ip = NULL; //pointer variable declaration
//   ip=&var;

//   printf("Address of var variable: %p\n", &var);
//   printf("Address stored in ip variable: %p\n", ip);
//   printf("value of *ip variable: %d\n", *p);
//   return 0;
// }

// Pass by referance 

// void doit(int *x)
// {
//   *x=5;
// }
// int main()
// {

// int z = 27;
// doit(&z);
// printf("value of z is now: %d\n", z)

// }

// Pass by value

// int main()
// {

// int A=10;
// int copyA= A;
// copyA=12;

// print ("%d",A);
// return 0;

// }

//****************************************************

// Task 2

//Q1

// void fun(int x)
// {
//  x = 30;
// }

// int main()
// {
//  int y = 20;
//  fun(y);
//  printf("%d", y);
// }

//Q2

// void fun(int*ptr)
// {
//  *ptr = 30;
// }
// int main()
// {
// int y = 20;
// fun(&y);
// printf("%d", y);
// }
 
//Q3

// int main()
// {
// int *ptr;
// int x;
// ptr = &x;
// *ptr = 0;
// printf(" x = %d", x);
// printf(" *ptr = %d", *ptr);
// *ptr += 5;
// printf(" x = %d", x);
// printf(" *ptr = %d", *ptr);
// (*ptr)++;
// printf(" x = %d", x);
// printf(" *ptr = %d", *ptr);

// }

// lab 4

//Scheduling Algorithms
//FCFS

// int main()
// {

// int bt[20], wt[20], tat[20], i, n;
// float wtavg, tatavg;

// printf("/nEnter the number of process");
// scanf("%d", &n);

// for (i=0; i<n; i++)
// {
//   printf("/nEnter the burst time of process %d =", i);
//   scanf("%d", &bt[i]);
// }

// wt[0]= wtavg=0, tat[0]=tatavg=0;

// for ( i = 0; i < n; i++)
// {
//   wt[i]= wt[i-1] + bt[i-1];
//   tat[i]= tat[i-1] + bt[i];
//   wtavg= wtavg + wt[i];
//   tatavg= tatavg + tat[i];
// }

// printf("\t Process \t Burst Time \t Waiting Time \t TurnAround Time\n");

// for ( i = 0; i < n; i++)
// {
//   printf("\n\t P%d  \t\t %d \t\t %d \t\t %d", i, bt[i], wt[i], tat[i]);
// }

// printf("\n");
// printf("\n Average Waiting Time =%f", wtavg/n);
// printf("\n Average TurnAround Time =%f", tatavg/n);
// printf("\n");
// printf("\n");
// return 0;

// }



