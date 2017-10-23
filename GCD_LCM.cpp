#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* program to find the greatest common divisor and the least common multiple */
int main() {
	int i,a,b,gcd,lcm;
	cout << "enter two numbers: "<< endl;
	cin >> a;
	cout << endl;
	cin >> b;
	cout << endl;
	

	
	i=1;
	while(i<=a && i<=b)
	{
		if (a%i==0 && b%i==0)
		{
		gcd=i;
		}
	i++;
	}
	cout << "gcd is: "<< gcd << endl;
	
	if (a>b)
		lcm = (a / gcd) * b;
	else 
		lcm = (b / gcd) * a;
	cout << "lcm is : " << lcm << endl;	
	
	
	


	

	return 0;
}
