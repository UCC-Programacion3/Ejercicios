#include <ctime>
#include <iostream>

using namespace std;

int main() {
  clock_t begin;
  begin = clock();

  cout << "Comenzando a medir Tiempo\n" << endl;
  clock_t end = clock();

  double elapsed_secs = static_cast<double>(end - begin) / CLOCKS_PER_SEC;

  cout << "Tardo elapsed_secs" << elapsed_secs << "\n" << std::endl;
  return 0;
}
