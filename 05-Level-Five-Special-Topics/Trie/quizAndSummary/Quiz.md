# Trie Data Structure - Check Understanding MCQs

## Instructions
Answer the following 10 multiple-choice questions to test your understanding of Trie (prefix tree). Each question has 4 options; select the correct one. Answers at the end.

### Question 1: What is a Trie primarily used for?
A) Sorting numbers  
B) Storing strings with fast prefix searches  
C) Graph traversal  
D) Priority queue operations  

### Question 2: In a Trie node, what typically marks the end of a complete word?
A) A null child pointer  
B) A boolean flag (isEndOfWord)  
C) The leaf node's depth  
D) A special 'end' character  

### Question 3: What is the time complexity of inserting a word of length L into a Trie?
A) O(1)  
B) O(L)  
C) O(N) where N is total words  
D) O(L log N)  

### Question 4: How does a Trie handle shared prefixes efficiently?
A) By duplicating strings  
B) Using common path prefixes among nodes  
C) Hashing full strings  
D) Storing indices only  

### Question 5: To check if a prefix exists in a Trie, what do you do at the end?
A) Check if the final node has children  
B) Verify the node exists (no need for end flag)  
C) Count the subtree size  
D) Traverse backwards  

### Question 6: What is a disadvantage of Tries compared to hash tables for strings?
A) Slower search time  
B) Higher space usage for sparse data  
C) No prefix support  
D) Fixed size only  

### Question 7: In which scenario is Trie most optimal?
A) Frequent random access by index  
B) Autocomplete or spell-checking  
C) Numerical computations  
D) Cycle detection  

### Question 8: For alphabet size 26, how many child pointers does each node usually have?
A) 1 (next only)  
B) 26 (one per letter)  
C) Variable (map-based)  
D) None (binary tree)  

### Question 9: Deleting a word from Trie requires:
A) Removing all nodes in path  
B) Unsetting end flag; prune if no children  
C) Shifting remaining words  
D) Rebuilding the Trie  

### Question 10: Space complexity of Trie for N words of length L (no sharing)?
A) O(N)  
B) O(N * L)  
C) O(L)  
D) O(26 * L)  

## Answers
1: B 
2: B 
3: B  
4: B  
5: B  
6: B 
7: B 
8: B 
9: B 
10: B 

