#include <iostream>
   using namespace std;

int main( ) 
{
   double f1= 5.000;
   cout << f1 << endl;   // noshowpoint is default
   cout.precision( 4 );
   cout << showpoint << f1 << endl;
   cout << noshowpoint << f1 << endl;
   cout<<"Beep\a"<<endl;
   cout<< "Backspace\b\b\b\b\b"<<"______"<<endl;
   cout<<"CRLF \n";
   cout<<"  CR \r"<<"CR"<<endl;  
   cout<<"\t Horizontal Tab"<<endl;
   cout<<"\\ backslash \' single quote \" double quote \? question mark"<<endl;
   return 0;


   
}





