#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    system("color 4F");
	cout<<"\xF7 45\xAB\xF8 \xAD \x80"<<endl;
	cout<<endl<<endl;
	cout<<"\xDA"<<setfill('\xC4')<<setw(79)<<"\xBF";
	for(int x=0;x<1;++x)
	{
		cout<<"\xB3"<<setfill('\xB0')<<"hello"<<setw(74)<<"\xB3";
	}
	//cout<<setw(80)<<"\xCD"<<endl;
	cout<<"\xC0"<<setfill('\xC4')<<setw(79)<<"\xD9"<<endl;
	return 0;
}