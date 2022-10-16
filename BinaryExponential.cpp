#include<bits/stdc++.h>
using namespace std;

long long BinaryExpo(long long base, long long power, long long mod) {
   long long result = 1;

   while (power) {

      if (power % 2) {
         result = (result * base) % mod;
         power--;
      }
      else {
         base = (base * base) % mod;
         power /= 2;
      }
   }

   return result;
}

int main() {

   ios_base::sync_with_stdio(false);
   cin.tie(0), cout.tie(0);

   int tc;
   cin >> tc;
   while (tc--) {

      long long base , power;
      cin >> base >> power;
      cout << BinaryExpo(base, power, 1e7 + 10) << endl;

   }

   return 0;
}