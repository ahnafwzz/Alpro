
#include <iostream>
using namespace std;

// 1. Menggunakan typedef untuk pointer ke struct Node
typedef struct Node* nodePtr;

class Train {
private:
    // 2. Node dengan pointer
    struct Node {
        char data;
        nodePtr next;
    };

    nodePtr head;

public:
    Train() {
        head = NULL;
    }

    // Fungsi insert di depan (insert first)
    void insertFirst(char value) {
        nodePtr newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // Fungsi untuk menampilkan hasil (3. menampilkan hasil sesuai)
    void display() {
        nodePtr temp = head;
        while (temp != NULL) {
            cout << "[" << temp->data << "] -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Train kereta;

    // 4. Insert sesuai soal: insert first
    kereta.insertFirst('c');
    kereta.insertFirst('b');
    kereta.insertFirst('a');
    kereta.display();

    // Insert x di depan
    kereta.insertFirst('x');
    kereta.display();

    return 0;
}
