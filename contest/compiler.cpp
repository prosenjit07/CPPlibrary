#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <bitset>

const int MAX_N = 1000005; // Adjust this as needed

std::bitset<MAX_N> isPrime;
std::vector<int> primes;

// Sieve of Eratosthenes to find primes up to MAX_N
void sieve() {
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i < MAX_N; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX_N; j += i) {
                isPrime[j] = 0;
            }
        }
    }
    for (int i = 2; i < MAX_N; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    sieve(); // Generate prime numbers

    std::vector<int> numbers;
    std::string line;

    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);
        int num;

        while (iss >> num) {
            numbers.push_back(num);
        }
    }

    if (numbers.size() != 3) {
        std::cout << "0" << std::endl;
    } else {
        int evenNum = numbers[0];
        int prime1 = numbers[1];
        int prime2 = numbers[2];

        bool validPrimes = false;
        for (int p : primes) {
            if (p >= prime1 && isPrime[prime1] && isPrime[prime2] && prime1 + prime2 == evenNum) {
                validPrimes = true;
                break;
            }
        }

        if (evenNum >= 4 && evenNum <= 1000000000 && evenNum % 2 == 0 && validPrimes) {
            std::cout << "1" << std::endl;
        } else {
            std::cout << "0" << std::endl;
        }
    }
    return 0;
}
