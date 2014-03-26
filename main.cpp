#include <iostream>
#include <string>

using namespace std;
class cOsoba
{
public:

	string imie;
	string nazwisko;
	int wiek;



	cOsoba();
	~cOsoba();
	void wypisz();

};

cOsoba::cOsoba()
{
	cout<<"konstruktor"<<endl;
    imie="Maciej";
	nazwisko="Be";
	wiek=22;
}

cOsoba::~cOsoba()
{
	cout<<"destruktor"<<endl;
	system("pause");

}


void cOsoba::wypisz ()
{
	cout<<imie<<" "<<nazwisko<<" "<<wiek<<endl;
}


int main()
{
	cOsoba o1;
	system("pause");
	o1.wypisz();


	system("pause");
	return 0;
}
