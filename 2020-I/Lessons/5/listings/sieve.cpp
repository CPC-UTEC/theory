bool notPrime[N];

void sieve() {
	for (int i = 2; i <= N; i++) {
		if (notPrime[i]) continue;
		for (int j = 2 * i; j <= N; j += i) {
			isPrime[j] = false;		
		}
	}
}
