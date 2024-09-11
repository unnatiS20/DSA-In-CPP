
#include <bits/stdc++.h> 
using namespace std; 

void printReverseFloyd(int n) 
{ 
	int curr_val = n * (n + 1) / 2; 
	for (int i = n; i >= 1; i--) 
	{ 
		for (int j = i; j >= 1; j--) 
		{ 
			cout << setprecision(2); 
			cout << curr_val-- << " "; 
		} 

		cout << endl; 
	} 
} 

// Driver's Code 
int main() 
{ 
	int n = 7; 
	printReverseFloyd(n); 
	return 0; 
} 
