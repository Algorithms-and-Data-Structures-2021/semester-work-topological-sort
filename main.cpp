#include <iostream>

#include "data_structure.hpp"

using namespace std;

// Программа для тестирования
int main()
{
  // Создаем граф
  Graph g(6);
  g.addEdge(5, 2);
  g.addEdge(5, 0);
  g.addEdge(4, 0);
  g.addEdge(4, 1);
  g.addEdge(2, 3);
  g.addEdge(3, 1);

  cout << "Following is a Topological Sort of the given graph: \n";
  g.topologicalSort();

  return 0;
}