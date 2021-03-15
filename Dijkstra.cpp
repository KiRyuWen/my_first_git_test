#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Graph
{
private:
    bool **graph;
    int size;

public:
    Graph()
    {
        cout << "Input size\n";
        cin >> size;
        graph = new bool *[size];
    }
    void generateGraph()
    {
    }
};
int main()
{
    srand(time(NULL));
}