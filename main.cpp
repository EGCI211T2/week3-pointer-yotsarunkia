#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
  int *pa, *pb, i, temp;
  int SIZE = argc - 1;
  pa = new int[SIZE];
  pb = new int[SIZE];
  for (i = 0; i < SIZE; i++)
  {
    *pa = atoi(argv[i + 1]);
    *pa++;
    *pb = atoi(argv[i + 1]);
    *pb++;
  }
  *pa -= i;
  for (i = 0; i < SIZE / 2; i++)
  {
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    pa++;
    pb--;
  }
  pa -= i;

  for (i = 0; i < SIZE - 1; i++, pa++)
  {
    cout << setw(3) << *pa;
  }

  return 0;
}
