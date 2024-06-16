
                      //ARRAYS

//GST using array

/*
#include <stdio.h>
int main(){
  float price[3];
  printf("Enter three prices");
  scanf("%f", &price[0]);
  scanf("%f", &price[1]);
  scanf("%f", &price[2]);
   printf("Total price with GST = %f\n", price[0]+price[0]*(0.18));
  printf("Total price with GST = %f\n", price[1]+price[1]*(0.18));
  printf("Total price with GST = %f\n", price[2]+price[2]*(0.18));
}
*/


// Array and pointers 

/*
#include <stdio.h>
void Numbers(int *arr, int n);
int main(){
  int arr[] = {1, 2, 3, 4, 5, 6};
  Numbers(arr, 6);
}
void Numbers(int *arr, int n){
  for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
  printf("\n");
}
*/

//TRAVARSE IN ARRAY


/*
#include <stdio.h>
int main(){
  int aadhar[5];
  int *ptr = &aadhar[0];
  for(int i=0;i<5;i++){
    printf("%d index:", i);
    scanf("%d", (ptr+i));
  }
  for(int i=0;i<5;i++){
    printf("%d index: %d\n", i, aadhar[i]);
  }
  return 0;
}
*/


// MULTIDIMENSIONAL ARRAY


/*
#include <stdio.h>
int main(){
  int marks[2][3];
  marks[0][0]= 89;
  marks[0][1]= 75;
  marks[0][2]= 85;

  marks[1][0]= 79;
  marks[1][1]= 95;
  marks[1][2]= 80;

  printf(" marks = %d", marks[0][2]);
  return 0;
}
*/
//   Check No Of Odd in Array


/*
#include <stdio.h>
int CheckOdd(int arr[], int n);
int main(){
  int arr[] = {1,2,3,4,5,6,7};
  printf("%d", CheckOdd(arr, 7));
  return 0;
}
int CheckOdd(int arr[], int n){
  int count = 0;
  for(int i=1;i<=n;i++){
    if(i%2!=0){
      count++;
    }
  }
  return count;
}
*/

//  Check Odd in Array



/*#include <stdio.h>
int CheckOdd(int arr[], int n);
int main(){
  int arr[] = {1,2,3,4,5,6,7};
  printf("%d", CheckOdd(arr, 7));

}
int CheckOdd(int arr[], int n){
  int count = 0;
  for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
      count ++;
      printf("the odd number: %d\n", i);
    }
  }
  return count;
    
}
*/


/*
#include <stdio.h>

int CheckOdd(int arr[], int n);

int main(){
  int arr[] = {1,2,3,4,5,6,7};
  printf("%d", CheckOdd(arr, 7));
  return 0;
}

int CheckOdd(int arr[], int n){
  int count = 0;
  for(int i=0; i<n; i++){
    if(arr[i] % 2 != 0){
      count++;
    }
  }
  return count;
}

*/


//  understand the array

/*
#include <stdio.h>
int CheckOdd(int arr[], int n);
int main(){
  int arr[] = {1,2,3,4,5};
  printf("%d\n", *(arr+2));
  printf("%d\n", *(arr+5));

  return 0;
}
*/




// Reverse of an Array


/*
#include <stdio.h>
void reverse(int arr[], int n);
void printArr(int arr[], int n);
int main()
{
  int arr[]={1,2,3,4,5,6};
  reverse(arr, 6);
  printArr(arr, 6);
    return 0;
}
  void printArr(int arr[], int n)
  {
    for(int i=0;i<n;i++)
      {
        printf("%d\t", arr[i]);
      }
    printf("\n");
  }
  void reverse(int arr[], int n)
  {
    for(int i=0;i<n/2;i++){
      int FirstValue = arr[i];
      int SecondValue = arr[n-i-1]; 
      arr[i] = SecondValue;
      arr[n-i-1] = FirstValue;
    }
  }
*/



// FIBONACCCI SERIES


/*
#include <stdio.h>
int main()
{
  int n;
  printf("enter n (n>2):");
  scanf("%d", &n);
  int fib[n];
  fib[0] = 0;
  fib[1] = 1;
  for(int i=2;i<n;i++)
    {
      fib[i] = fib[i-1] + fib[i-2];
      printf("%d\t", fib[i]);
    }
  return 0;
}
*/


// Store tables of 2's and 3's

/*
#include <stdio.h>
void StoreTable(int arr[][10], int n, int m, int number);

int main()
{
  int tables[2][10];
  StoreTable(tables, 0,10,2);
  StoreTable(tables, 1,10,3);

  for(int i=0;i<10;i++)
    {
      printf("%d\t", tables[0][i]);
    }
  printf("\n");

  for(int i=0;i<10;i++)
    {
      printf("%d\t", tables[1][i]);
    }
  printf("\n");
  return 0;
}
void StoreTable(int arr[][10], int n, int m, int number)
{
  for(int i=0; i<m; i++)
    {
      arr[n][i]= number*(i+1);  
    }
}
*/