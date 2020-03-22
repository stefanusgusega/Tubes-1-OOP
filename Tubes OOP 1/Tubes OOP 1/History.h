#include <queue>
#include <iostream>
#include "UnaryExpression.h"
#include "BinaryExpression.h"
#include <iterator>
#include "ErrorHandling.h"
using namespace std;

template<class T>
class History {
    private:
    queue<T> hist;
    public:
    History() {
        
    }
    ~History() {

    }
    void mc(T res) { // tombol MC : menyimpan memori
        hist.push(res);
    }
    T mr() { // tombol MR : memory recall
        T first;
        if (!hist.empty()) {
            first = hist.front();   
            hist.pop();
        }
        else {
            throw new EmptyQueuePopError();
        }
        return first;
    }

    void clear() { // mengosongkan memori
        while (!hist.empty()) {
            hist.pop();
        }
    }
    // void viewQueue() {
    //     deque<int>::iterator it;
    //     for (it = hist.begin(); it != hist.end(); ++it) {
    //         cout << *it << " ";
    //     }
    // }

};

