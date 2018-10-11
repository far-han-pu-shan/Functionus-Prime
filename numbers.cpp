
/*
Author: Farhan Pushan


Course: CSCI-136


Instructor: Maryash



Assignment: Lab5E



Task G. Largest twin prime in range

Add a function

int largestTwinPrime(int a, int b);

that returns the largest twin prime in the range a ≤ N ≤ b.
If there is no twin primes in range, then return -1.
For example:

largestTwinPrime(5, 18) == 17

largestTwinPrime(1, 31) == 31

largestTwinPrime(14, 16) == -1

Change the main function to test the new code.


*/









#include <iostream>

using namespace std;


bool isDivisibleBy(int n, int d)
{

if (d == 0)

	{return false;}
		
	if ( n % d == 0)
	{
		return true;
	} 
	else
	{
		return false;
	}
	
}



bool isPrime(int n)  
{

if (n <=1)
	{return false;}	
	
	for (int i = 2; i < n ; i++)
	{
		if ( n % i == 0 )
		{
			return false;
		}
		
		
	}
	
	
	return true;
		
}


int nextPrime(int n)
{

//start at n, increment by 1 and check for the smallest prime greater than n

//for(int i = n; i > )

n++;

while ( !isPrime(n)) //this n is different ; in diff scope
{
	n++;
}

return n;	

} // end function


int countPrimes(int a, int b)
{

int counter = 0;


	for(int i = a; i <= b; i++ )
	{
		if(isPrime(i))//already a bool
		{
		counter ++;
		}
	}
return counter;
}



bool isTwinPrime(int n)
{

	if (isPrime(n) && (isPrime(n -2) || isPrime(n+2)))
	{
	
	return true;
		
	}
	
	else
	
	{
	return false;
	}
	


} //end function


int nextTwinPrime(int n)
{

n++;

while (!isTwinPrime(n))
{
	n++; // why?
}

return n;

} // end fucntion;


int largestTwinPrime(int a, int b)

{
int store_i;

	for(int i = b; i >= a; i-- )
	{
	
		if (isTwinPrime(i))
		{
			//store_i = i;
			//i--;
			
			//if (i > store_i)
			//{
				//store_i = i;
			//}
			
			return i; 
				
		}

	}
return -1;

}// end function




int main()
{
	//int input = isDivisibleBy(100,0);
		
	
	int firstnum, secnum;	
		
	cout << "Enter integer:" << endl;
	
	cin >> firstnum;
	
	cout << "Enter integer:" << endl;
	
	cin >> secnum;
	
	int input = isDivisibleBy(firstnum , secnum);
	
	cout << endl;
	
	//cout << input << endl;
	
	if(input == 1)
	
	{
		cout << "Yes" << endl;
	}
	
	else
	{
		cout << "No" << endl;
	}
	
	
	int primeTest = isPrime(firstnum);
	
	cout << primeTest << endl;
	

	
		
	cout << nextPrime(14) << endl;	

	cout << countPrimes(10, 17) << endl;
	
	cout << isTwinPrime(5) << endl;
	
	cout << nextTwinPrime(5) << endl;
	
	cout << largestTwinPrime(5, 18) << endl;
}

