#include<iostream>
#include<string>

using namespace std;


int main(void)
{
	
	int n;
	int cont=0;
	
	
	
	cin >> n;
	string str;
	

	cin >> str;
	
	for(int i=0; i < n-1; i++)
	{
		if(str[i] == 'a' && str[i+1] == 'a')
		{
			while(str[i] == 'a')
			{
				cont++;
				i++;
			}
				
				
		}
	}
		
	cout << cont << endl;
	
	
	
	return 0;
}
