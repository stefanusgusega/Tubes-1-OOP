#include <queue>
#include <iostream>
#include "UnaryExpression.h"
#include "BinaryExpression.h"
#include <iterator>
#include "ErrorHandling.h"
using namespace std;
// Untuk menyimpan apa saja yang di-MC oleh pengguna, dengan menggunakan STL queue
template<class T>
class History {
    private:
    queue<T> hist;
    public:
    History() {
        
    }
    ~History() {

    }
    // tombol MC : menyimpan memori
    void mc(T res) { 
        hist.push(res);
    }
    // tombol MR : memory recall
    T mr() { 
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
    // mengosongkan memori
    void clear() { 
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

