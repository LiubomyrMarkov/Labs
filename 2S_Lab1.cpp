#include <stdio.h>
#include <iostream>
#include <string.h>

 using namespace std;

 
long
func (long *arr, int length)
{
  
int res = 0;
  
int min = length - 1;
  
for (int i = 0; i < length; i++)
    {
      
if (arr[i] < arr[min])
	{
	  
min = arr[i];
	  
if (arr[i] % 2 >= 1)
	    res = arr[i];
	
}
    
}
  
return res;

}


 
float
func (int *arr, int length)
{
  
int res = 0;
  
int min = length - 1;
  
for (int i = 0; i < length; i++)
    {
      
if (arr[i] < arr[min])
	{
	  
min = arr[i];
	  
if (arr[i] % 2 >= 1)
	    res = arr[i];
	
}
    
}
  
return res;

}


 
int
main ()
{
  
long arr[] = { 2, 63, 22, 5, 12, 1, 43, 3, 34 };
  
int arr1[] = { 2, 4, 22, 4, 12, 12, 11, 1, 34 };
  
int length = sizeof (arr) / sizeof (long);
  
int length1 = sizeof (arr1) / sizeof (float);
  
long res = func (arr, length);
  
cout << "The smallest is: " << res << "\n";
  
float res1 = func (arr1, length1);
  
cout << "The smallest 2 is: " << res1;

} 
