#include <bits/stdc++.h>
using namespace std;

void print_patt(int row)
{
	int count = 1; 

	int i = 1, j;

	while (i <= row) 
	{
		j = 1; 

		
		while (j <= i) 
		{
			cout << count << " ";

			count += 1;
		
			j += 1; 
		}
	
		i += 1; 
	
		cout << "\n";
	}
}


int main()
{
	int row = 5;
	print_patt(row);
	return 0;
}
