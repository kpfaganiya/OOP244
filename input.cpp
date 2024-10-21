#include <iostream>
#include "input.h"
using namespace std;
namespace seneca {
   int getInt() {
      int num = 0;
      bool done = false;
      do {
         // extract an integer from the console and put it in num
         cin >> num;
         // if this action fails (the integer is unreadable)
         if (cin.fail()) {
            cout << "Bad integer entry, please try again:\n> ";
            // clear the failure status to activate cin again
            cin.clear();
         }
         else {
            done = true;
         }
         // flush the keyboard buffer up to 1000 characters or '\n', whichever comes first
         cin.ignore(1000, '\n');
      } while (!done);
      return num;
   }

   int getInt(int min, int max)
   {
       int v;
       
       do
       {
           v = getInt();
           if (v<min || v>max) {
               cout << "Invalid value, [" << min << "ENTRY<" << max << "]\n> ";
           }
           
       } while (v<min||v>max);
       return v;
   }

   bool getInt(int& num, int min, int max)
   {
      num = getInt();
      if (num >= min && num <= max) {
          return true;
      }
       return false;
   }
   
 
}

