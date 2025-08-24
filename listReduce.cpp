#include <iostream> 
#include <fstream> 

using namespace std; 



int main()
{

   string hexString; 
   string stringArray[32]; 
   ifstream file("random_bin_data.txt");
   int i = 0; 

   while (getline(file, stringArray[i]) && i < 32)
   { 
     if (i > 0 && stringArray[i] == stringArray[i-1])
     {
        cout << "Duplicate \n"; 
     }	
     else 
     {
       cout << "Line " << i << ": " << stringArray[i] << '\n'; 
	     i++;
     } 
   } 

   return 0; 
}
