/*
  Author: Yuvraj Sakshith
  Organisation: PES University
*/

/*
  The issue of identifying primes in constant time requires us to use more memory as a compromise. 
  We thus use memory which grows linearly to solve this problem.
  
   If a number 'x' needs to be checked for compositeness, then sieve[x] needs to be inspected. 
   sieve[x] = true, means 'x' is a prime, otherwise composite.
  
  
*/


const int N = 1e6;
bool sieve[N];


void pc(){
	memset(sieve, 1, sizeof(sieve));
	sieve[0] = sieve[1] = 0;
	sieve[2] = 1;
	for(int i=2;i*i<=N;i++){
		if(sieve[i]){
			for(int j=i*i;j<=N;j+=i){
				sieve[j] = 0;
			}
		}
	}
}
