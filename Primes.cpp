#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
// calculating the number of divisors
int devisiorsNum(int n){
  int res =0 ;
  int i ;
  for(i = 1; i*i<n ; i++){
   if(n%i==0)res+=2;
  }
  if(i*i==n) res+=1;
  return res;
}

//Primality test
bool isPrime(int n){
 for(int i = 2 ;i*i<=n ;i++){
    if(n%i==0) return false;
 }
  return true;
}

//Sieve of Eratosthenes
int countPrimesInRange(ll n){
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = 0 ;
    for(ll i =2 ; i*i<n ; i++){
        if(prime[i]) {
            for(int j =i *2 ; j<=n ; j+=i){
                if(prime[j]) prime[j] = 0;
            }
        }
    }
    int cnt =0;
    for(ll i = 0 ;i<=n;i++){
        if(prime[i]) cnt++;
    }
    return cnt ;
}

int cntDivisor(ll n){
  ll numOfDiv =0;
  ll i;
  for(ll i = 1 ; i*i<n;i++){
    if(n%i==0) numOfDiv+=2;
  }
  if(i*i==n) numOfDiv++;
  return numOfDiv;
}

int peri(int a, int b){
    return (a+b)*2;
}

int solution(int N) {
   int mini =INT_MAX;
   for(int i =1 ; i*i<=N ;i++){
    if(N%i==0) mini = min(mini,peri(N/i,i));
   }
   return mini ;
}



int main()
{
   /*cout<<devisiorsNum(9)<<"\n";
    cout<<isPrime(13)<<"\n";
    cout<<countPrimesInRange(10)<<"\n";*/

    cout<<solution(30)<<"\n";
}
