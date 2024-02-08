#include <iostream>
#include <vector>

using namespace std;

#define N 8

// Función para imprimir la solución
void printSolution(vector<int> &board) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++)
      cout << ((board[i] == j) ? "Q " : "_ ");
    cout << endl;
  }
  /* cout << endl; */
}

// Función para verificar si la posición es segura para colocar una reina
bool isSafe(vector<int> &board, int row, int col) {
  for (int i = 0; i < row; i++) {
    if (board[i] == col ||                   // Misma columna
        abs(board[i] - col) == abs(i - row)) // Misma diagonal
      return false;
  }
  return true;
}

// Función recursiva para resolver el problema
bool solveNQUtil(vector<int> &board, int row) {
  if (row >= N)
    return true; // Todas las reinas están colocadas

  for (int col = 0; col < N; col++) {
    if (isSafe(board, row, col)) {
      board[row] = col; // Coloca esta reina en la columna col

      if (solveNQUtil(board, row + 1)) // Continúa con la siguiente reina
        return true;

      // Si colocar la reina en la columna col no conduce a una solución,
      // entonces quita la reina (backtrack)
    }
  }

  // Si la reina no puede ser colocada en ninguna fila en esta columna, retorna
  // false
  return false;
}

// Esta función resuelve el problema de las N reinas utilizando Backtracking.
bool solveNQ() {
  vector<int> board(N, -1); // Inicializa el tablero

  if (!solveNQUtil(board, 0)) {
    cout << "Solution does not exist" << endl;
    return false;
  }

  printSolution(board);
  return true;
}

int main() {
  solveNQ();
  return 0;
}
