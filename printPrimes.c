#include<stdio.h>
#define MAXPRIMES 10000

	void printPrimes(int n)
	{
    	int curPrime; // Value currently considered for primeness
    	int numPrimes; // Number of primes found so far.
        int isPrime; // Is curPrime prime?
        int primes[MAXPRIMES]; // The list of prime numbers.
 
        // Initialize 2 into the list of primes.
        primes [0] = 2;
        numPrimes = 1;
        curPrime = 2;
        while (numPrimes < n)
        {
            curPrime++; // next number to consider ...
            isPrime = 1;
            int i = 0;
            for (; i <= numPrimes-1; i++)
            { // for each previous prime.
                if (curPrime%primes[i]==0)
                { // Found a divisor, curPrime is not prime.
                    isPrime = 0;
                    break; // out of loop through primes.
                }
            }
            if (isPrime)
            { // save it!
                primes[numPrimes] = curPrime;
                numPrimes++;
            }
        } // End while
         int i = 0;
        // Print all the primes out.
        for (; i <= numPrimes-1; i++)
        {
            printf("Prime:%d\n", primes[i]);
        }
    } // end printPrimes
	
	int main()
    {
    	int a;
    	scanf("%d", &a);
    	printPrimes(a);
    	return 0;
    }