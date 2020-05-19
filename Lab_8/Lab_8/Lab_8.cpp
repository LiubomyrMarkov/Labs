#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
class Graph {
protected:
    int X,
        Y,
        count;
    T** adj;

public:

    Graph(int X, int Y) {
        this->X = X;
        this->Y = Y;

        adj = new T * [X];

        for (int i = 0; i < Y; i++) {
            adj[i] = new T[Y];
        }
    }

    void print() {
        for (int u = 0; u < X; u++) {
            for (int v = 0; v < Y; v++) {
                cout << setw(5) << adj[u][v] << " ";
            }
            cout << endl;
        }
    }

    void setArray() {
        for (int i = 0; i < X; i++) {
            for (int j = 0; j < Y; j++) {
                cout << "Enter element " << i + 1 << "." << j + 1 << ":" << endl;
                cin >> adj[i][j];
            }
        }
    }

    int func() {
        int counter = 0,
            counter1 = 0,
            temp,
            temp1,
            result = 0;

        for (int i = 0; i < X; i++) {
            counter = 0;

            if (adj[i][0] > 0)
                temp = 1;
            else
                temp = -1;

            for (int j = 0; j < Y; j++) {
                if (adj[i][j] > 0 && temp == 1) {}

                else if (adj[i][j] < 0 && temp == -1) {}

                else if (adj[i][j] > 0 && temp == -1) {
                    counter++;
                    temp = 1;
                }

                else if (adj[i][j] < 0 && temp == 1) {
                    counter++;
                    temp = -1;
                }
            }
            if (counter > counter1) {
                counter1 = counter;
                result = i + 1;
            }
        }

        return result;
    }

    ~Graph() {
        for (int i = 0; i < Y; ++i) {
            delete[] adj[i];
        }
        if (X == 1) {
            delete[]adj;
        }
    };
};


int main() {
    int sizeOfArry,
        sizeofArry1;
    cout << "Enter rows of Array: " << endl;
    cin >> sizeOfArry;
    cout << "Enter columns of Array: " << endl;
    cin >> sizeofArry1;

    Graph<int> Array = Graph<int>(sizeOfArry, sizeofArry1);
    Array.setArray();
    Array.print();

    cout << Array.func();

    return 0;
}
