# LRU (Least Recently Used) — Check Understanding MCQs

This file contains multiple-choice questions to assess understanding of the **LRU (Least Recently Used)** page replacement/cache policy.

---

## Instructions
- Choose the **one best answer** for each question.
- Answers are provided at the end.

---

## Questions

### Q1
What does **LRU** stand for?
- A. Least Required Update
- B. Last Recently Used
- C. Least Recently Used
- D. Lowest Resource Usage

---

### Q2
The main idea behind LRU is to:
- A. Remove the page with the smallest size
- B. Remove the page that was used most recently
- C. Remove the page that will be used farthest in the future
- D. Remove the page that has not been used for the longest time

---

### Q3
LRU is commonly used in:
- A. CPU scheduling only
- B. Disk formatting
- C. Cache management and page replacement
- D. Network routing

---

### Q4
Which of the following best describes LRU behavior?
- A. Pages are replaced randomly
- B. Frequently used pages are replaced first
- C. Recently used pages are kept longer
- D. Oldest pages by creation time are removed

---

### Q5
Which data structure is **most suitable** for implementing LRU efficiently?
- A. Stack only
- B. Queue only
- C. Hash Map + Doubly Linked List
- D. Binary Search Tree

---

### Q6
What is the time complexity of `get` and `put` operations in an optimal LRU cache implementation?
- A. O(n)
- B. O(log n)
- C. O(1)
- D. O(n log n)

---

### Q7
In LRU page replacement, a page fault occurs when:
- A. A page is written to disk
- B. A page is accessed and not present in memory
- C. A page is accessed frequently
- D. Cache size increases

---

### Q8
LRU is considered a practical approximation of which theoretical algorithm?
- A. FIFO
- B. LFU
- C. Optimal (MIN)
- D. Random Replacement

---

### Q9
Which of the following is a **disadvantage** of pure LRU?
- A. Poor performance
- B. High implementation overhead
- C. It cannot be implemented in software
- D. It always causes more page faults than FIFO

---

### Q10
In a system using LRU, which page will be evicted?
- A. The page with the largest size
- B. The page accessed most frequently
- C. The page accessed least recently
- D. The page with the lowest address

---

## Answers

| Question | Correct Answer |
|---------:|----------------|
| Q1 | C |
| Q2 | D |
| Q3 | C |
| Q4 | C |
| Q5 | C |
| Q6 | C |
| Q7 | B |
| Q8 | C |
| Q9 | B |
| Q10 | C |

---

## Notes
- LRU assumes that **recent past behavior predicts near-future behavior**.
- Real systems often use **approximations of LRU** due to hardware and performance constraints.

---



