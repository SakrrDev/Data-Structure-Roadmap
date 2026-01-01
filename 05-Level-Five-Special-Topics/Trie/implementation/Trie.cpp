#include <iostream>
#include <unordered_map>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    // Insert a word into the trie
    void insert(const string& word) {
        TrieNode* current = root;

        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                current->children[ch] = new TrieNode();
            }
            current = current->children[ch];
        }
        current->isEndOfWord = true;
    }

    // Search for a complete word
    bool search(const string& word) {
        TrieNode* current = root;

        for (char ch : word) {
            if (current->children.find(ch) == current->children.end()) {
                return false;
            }
            current = current->children[ch];
        }
        return current->isEndOfWord;
    }

    // Check if a prefix exists
    bool startsWith(const string& prefix) {
        TrieNode* current = root;

        for (char ch : prefix) {
            if (current->children.find(ch) == current->children.end()) {
                return false;
            }
            current = current->children[ch];
        }
        return true;
    }
};

int main() {
    Trie trie;

    trie.insert("cat");
    trie.insert("car");
    trie.insert("dog");

    cout << trie.search("cat") << endl;      // 1 (true)
    cout << trie.search("cab") << endl;      // 0 (false)
    cout << trie.startsWith("ca") << endl;   // 1 (true)
    cout << trie.startsWith("do") << endl;   // 1 (true)
    cout << trie.startsWith("da") << endl;   // 0 (false)

    return 0;
}
