#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    const double tenth = 0.10;
    const double one   = 1.00;
    const double big   = 1234567890.0;
	double larger= 12.34;
	cout<<showpoint;
    cout<<"1234567890123456789012345678901234567890"<<endl;
	cout<<setw(10)<<tenth<<setw(10)<<larger<<setw(10)<<one<<endl;
	cout<<setw(10)<<larger<<setw(10)<<tenth<<setw(10)<<one<<endl;
	cout<<"1234567890123456789012345678901234567890"<<endl;
	cout<<"\t"<<tenth<<"\t"<<larger<<"\t"<<one<<endl;
	cout<<'\t'<<larger<<'\t'<<tenth<<"\t"<<one<<endl;
	cout<<noshowpoint;
                        
    cout << "A. "                    << tenth << ", " << one << ", " << big << endl;
    cout << "B. "  <<setprecision(3) << tenth << ", " << one << ", " << big << endl;
	cout << "C. " << fixed           << tenth << ", " << one << ", " << big << endl;
    cout << "D. " << uppercase<<scientific<< tenth << ", " << one << ", " << big << endl;
    cout << "E. " << fixed << setprecision(2) << tenth << ", " << one << ", " << big << endl;
    cout << "F. " << setprecision(10) << tenth << endl;
    cout << "G. " << setw(8)<<34<<45<<endl;
    cout << "H. " << setw(8) << 34 <<setw(8)<< 45 << endl;
    cout << "I. " << setw(8) <<setfill('*')<< 34 << setw(8) << 45 << endl;
    cout << "J. " << setw(8)<<left<<34<<setw(8)<<right<<45<<endl;
	
      
    return 0;
}
