const int NMAX = 100;
void f(int n, int c[][NMAX], int a[][NMAX], int b[][NMAX]) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      c[i][j] = 0;
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < n; ++k) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}
