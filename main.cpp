#include <iostream>

int ** create (size_t rows, size_t cols);
void remove (int **m, size_t rows, size_t cols);
void input (int ** m, size_t rows, size_t cols);
void output (const int * const * m, size_t rows, size_t cols);

int main()
{
  size_t rows = 0, cols = 0;
  std::cin >> rows >> cols;
  if (!std::cin ) {
    return 1;
  }
  int ** m = create (rows, cols);
  input (m, rows, cols);
  if (!std::cin) {
    remove(m, rows, cols);
    return 1;
  }
  output (m, rows, cols);
  remove (m, rows, cols);
  std::cout << "\n";
}
