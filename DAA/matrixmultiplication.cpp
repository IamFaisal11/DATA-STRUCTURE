#include<iostream>
using namespace std;

int matOrder(int array[], int n) {
   int minMul[n][n];         
   for (int i=1; i<n; i++)
      minMul[i][i] = 0;           

   for (int length=2; length<n; length++) {       
      for (int i=1; i<n-length+1; i++) {
         int j = i+length-1;
         minMul[i][j] = INT_MAX;     
         for (int k=i; k<=j-1; k++) {
            int q = minMul[i][k] + minMul[k+1][j] + array[i- 1]*array[k]*array[j];
            if (q < minMul[i][j])
               minMul[i][j] = q;
         }
      }
   }
   return minMul[1][n-1];
}

int main() {
   int arr[] = {1, 2, 3, 4};
   int size = 4;
   cout << "Minimum number of matrix multiplications: " << matOrder(arr, size);
}
