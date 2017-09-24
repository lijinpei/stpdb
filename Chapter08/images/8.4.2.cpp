const int NMAX = 100;
bool a[NMAX];
extern int sqrt(int);

void f(int n) {
  for (int i = 2; i <= n; ++i) {
    a[i] = true;
  }
  int count = 0;
  int s = sqrt(n);
  for (int i = 2; i <= s; ++i) {
    if (a[i]) {
      ++count;
      for (int j = 2 * i; j <= n; j += i) {
        a[j] = false;
      }
    }
  }
}
