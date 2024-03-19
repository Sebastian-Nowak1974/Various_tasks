//This program puts elements of an array in alphabetic order.
//The sample array is used as an example.
#include <string>
#include <iostream>
using namespace std ;

void sort(string array[], int) ;
int main()
{
  int k ;
  string list[] = {"apple", "beetroot", "check", "apps", "Fred", "banana",
  "append", "zip", "a", "Zack", "Anna"};     
  cout << "Original list: " << endl ; 
  for (k = 0; k < 11; k++)
  { 
    cout << list[k]  << ", " ;    
  }

  sort(list, 11) ;
  cout << endl  << "Sorted list: " << endl ;
  for (k = 0; k < 11; k++)
  { 
    cout << list[k]  << ", " ;    
  }
    
  return 0 ;
}

void sort(string array[], int size) 
{
  int i ;
  string min ;
  int j = 0 ;      
  while (j < size - 1)
  {
    int min_index = 0;
    min = array[j] ;     
    for (i = j + 1; i < size; i++)
    {        
      int x = min.compare(array[i]) ;
      if (x > 0)
      {
        min = array[i] ; 
        min_index = i ; 
      }     
    }        
    if (min_index != 0)
    {
      array[min_index] = array[j] ;
      array[j] = min ;
    }
    j++ ;
  }      
}
    