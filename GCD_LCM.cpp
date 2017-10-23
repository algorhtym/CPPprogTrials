#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,a,b,ebob,ekok;
	cout << "iki sayý giriniz: "<< endl;
	cin >> a;
	cout << endl;
	cin >> b;
	cout << endl;
	

	
	i=1;
	while(i<=a && i<=b)
	{
		if (a%i==0 && b%i==0)
		{
		ebob=i;
		}
	i++;
	}
	cout << "ebob degeri: "<< ebob << endl;
	
	if (a>b)
		ekok = (a / ebob) * b;
	else 
		ekok = (b / ebob) * a;
	cout << "ekok degeri: " << ekok << endl;	
	
	
	


	

	return 0;
}
