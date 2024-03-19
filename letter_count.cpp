//This program counts frequency of each alphabet letter in sample text
//and prints out the result.

#include <string>
#include <sstream>
#include <iostream>
using namespace std ;
int main()
{
  string cnt_str ;  
  stringstream stream ;  
  string result = "Letter frequency in the text: \n" ; 

  string alphabet[] = {"aA", "bB", "cC", "dD", "eE", "fF", "gG", "hH", "iI",
  "jJ", "kK", "lL", "mM", "nN", "oO", "pP", "qQ", "rR", "sS", "tT", "uU", "vV",
  "wW", "xX", "yY", "zZ"} ;  

  string text = "'For example, 'a' is the lower case version of 'A' and 'w' is the lower\
  \ncase version of 'W'. Here are all the lower case letters in the English alphabet:\
  \na, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y and z.'" ; 

  for (auto i: alphabet)
  { 
    int num = text.find_first_of(i, 0) ;
    int cnt = 0 ;    
    while (num != -1)
    { 
      cnt += 1 ;
      num = text.find_first_of(i, num + 1) ;    
    }
    stream << cnt ;
    stream >> cnt_str ;
    result = result + i[0] + ":  " + cnt_str + "\n" ;
    stream.clear() ;
    cnt_str.clear() ;       
  }
  cout <<"Sample text:" << endl << text << endl ;
  cout << endl << result ;
  return 0 ;
}
