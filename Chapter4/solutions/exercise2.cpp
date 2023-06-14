/*
  Exercise: Arrays and functions
*/

#include <iostream>
using namespace std;

// Print the content of an arrray
void print_array(const int a[], int n) {

  cout << "Content array:" << endl;
  for (int i = 0; i < n; i++)
    cout << "index = " << i << ", value = " << a[i] << endl;

}

// Compute max value of an array
int max_array(const int a[], int n)  {
  double max = a[0];
  for (int i = 1; i < n; i++)
    if (a[i] > max)
      max = a[i];

  return max;
}

// Compute min value of an array
int min_array(const int a[], int n) {

  double min = a[0];
  for (int i = 1; i < n; i++)
    if (a[i] < min)
      min = a[i];
  return min;

}

// Compute minimum and maximum value of an array
void min_max_array(const int a[], int n, int &min, int &max) {

  max = max_array(a, n);
  min = min_array(a, n);

}

// Sort and array in increading mode
void sort_array(int a[], int n) {

  for (int i = 0; i < n-1; i++)
    for (int j = i+1; j < n; j++)
      if (a[i] > a[j]) {

        const int dep = a[i];
        a[i] = a[j];
        a[j] = dep;
        
      }

}

int main() {

  // Create variables
  const int n = 10;
  int v[n] = {9, 2, 1, 3, 4, 7, 0, 11, 20, 5};

  // Print v
  print_array(v, n);

  // Compute maximum/minimum array
  cout << "max = " << max_array(v, n) << endl;
  cout << "min = " << min_array(v, n) << endl;

  // Using min_max_array
  int min, max;
  min_max_array(v, n, min, max);
  cout << "min = " << min << ", max = " << max << endl;

  // Sort out
  sort_array(v, n);
  print_array(v, n);

  return 0;

}