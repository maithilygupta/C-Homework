#include<iostream>
using namespace std;
int main()
{	int numbers[5],j;
cout<<"Enter the elements:";
for(j = 0; j < 5; ++j)
      cin >> numbers[j];

   cout << "You entered: ";
   for(j = 0; j < 5; ++j)
      cout <<*(numbers + j)<<"\n";
return 0;
}
