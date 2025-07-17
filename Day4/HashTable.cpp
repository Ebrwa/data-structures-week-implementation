#include <iostream>
#include <list>
using namespace std;

// Simple hash table using chaining 
class HashTable {
private:
    static const int SIZE = 7;
    list<pair<string, int>> table[SIZE]; 

    // Basic hash function that :sums ASCII values of characters
    int hash(string key) {
        int sum = 0;
        for (char ch : key) {
            sum += ch;
      }
        return sum % SIZE;
    }

public:
    
    void insert(string key, int value) {
        int index = hash(key);
        for (auto& item : table[index]) {
            if (item.first == key) {
             item.second = value; 
              return;
            }
        }
       table[index].emplace_back(key, value); 
    }

    // Remove key from table if it exists
    bool remove(string key) {
       int index = hash(key);
       for (auto it = table[index].begin(); it != table[index].end(); ++it) {
          if (it->first == key) {
                table[index].erase(it);
                return true;
            }
        }
        return false;
    }

    // Print full contents of the table
    void display() {
      for (int i = 0; i < SIZE; ++i) {
            cout << "[" << i << "]: ";
           for (auto& item : table[i]) {
                cout << "(" << item.first << ", " << item.second << ") ";
            }
            cout << endl;
        }
    }
};

int main() {
    HashTable ht;

    ht.insert("apple", 10);
    ht.insert("banana", 20);
    ht.insert("grape", 30);
    cout << "Hash table contents:\n";
    ht.display();
    ht.remove("banana");
    cout << "\nAfter removing 'banana':\n";
    ht.display();

    return 0;
}
