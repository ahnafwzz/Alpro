#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Fungsi untuk membuat node baru
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Fungsi untuk menambahkan node di awal
void insertHead(Node*& head, int data) {
    Node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

// Fungsi untuk menambahkan node di akhir
void insertTail(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Fungsi untuk menyisipkan node setelah node tertentu
void insertAfter(Node* head, int key, int data) {
    Node* temp = head;
    while (temp != nullptr && temp->data != key) {
        temp = temp->next;
    }
    if (temp != nullptr) {
        Node* newNode = createNode(data);
        newNode->next = temp->next;
        temp->next = newNode;
    } else {
        cout << "Data tidak ditemukan.\n";
    }
}

// Fungsi untuk menghapus node pertama
void deleteFirst(Node*& head) {
    if (head == nullptr) {
        cout << "List kosong.\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// Fungsi untuk menghapus node terakhir
void deleteLast(Node*& head) {
    if (head == nullptr) {
        cout << "List kosong.\n";
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

// Fungsi untuk menghapus node berdasarkan nilai
void deleteByValue(Node*& head, int key) {
    if (head == nullptr) {
        cout << "List kosong.\n";
        return;
    }
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != key) {
        temp = temp->next;
    }
    if (temp->next != nullptr) {
        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    } else {
        cout << "Data tidak ditemukan.\n";
    }
}

// Fungsi untuk mencetak isi linked list
void printList(Node* head) {
    if (head == nullptr) {
        cout << "List kosong.\n";
        return;
    }
    Node* temp = head;
    cout << "Isi Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Fungsi untuk menampilkan menu
void displayMenu() {
    cout << "\n=== MENU LINKED LIST ===" << endl;
    cout << "1. Insert First" << endl;
    cout << "2. Insert Last" << endl;
    cout << "3. Insert After" << endl;
    cout << "4. Delete First" << endl;
    cout << "5. Delete Last" << endl;
    cout << "6. Delete by Value" << endl;
    cout << "7. Print List" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
}

int main() {
    Node* head = nullptr;
    int choice, data, key;

    do {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Masukkan data: ";
                cin >> data;
                insertHead(head, data);
                break;
            case 2:
                cout << "Masukkan data: ";
                cin >> data;
                insertTail(head, data);
                break;
            case 3:
                cout << "Masukkan data setelah nilai: ";
                cin >> key;
                cout << "Masukkan data baru: ";
                cin >> data;
                insertAfter(head, key, data);
                break;
            case 4:
                deleteFirst(head);
                break;
            case 5:
                deleteLast(head);
                break;
            case 6:
                cout << "Masukkan nilai yang ingin dihapus: ";
                cin >> key;
                deleteByValue(head, key);
                break;
            case 7:
                printList(head);
                break;
            case 0:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (choice != 0);

    return 0;
}
