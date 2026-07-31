# Browser History Manager (C++)

A simple console-based Browser History Manager developed in **C++** using a **Singly Linked List** and **Stacks**. This project simulates basic browser navigation such as visiting websites, going back, going forward, deleting URLs, and displaying browsing history.

---

## Features

- Visit a new website
- Navigate Back
- Navigate Forward
- Display complete browsing history
- Delete a URL from history
- Menu-driven console interface

---

## Data Structures Used

- **Singly Linked List**
  - Stores the complete browsing history.
- **Stack**
  - Back Stack
  - Forward Stack

---

## Project Structure

```text
BrowserHistoryManager/
│
├── BrowserHistory.h
├── BrowserHistory.cpp
├── main.cpp
├── README.md
└── docs/
    ├── mainmenu.png
    ├── displayhistory.png
    ├── goback.png
    ├── forward.png
    └── urldelete.png
```

---

## How to Run

### Clone the repository

```bash
git clone https://github.com/your-username/BrowserHistoryManager.git
```

### Open the project

```bash
cd BrowserHistoryManager
```

### Compile

Using **g++**

```bash
g++ main.cpp BrowserHistory.cpp -o browser
```

### Run

#### Windows

```bash
browser.exe
```

#### Linux / macOS

```bash
./browser
```

---

# Screenshots

## Main Menu

![Main Menu](/docs/mainmenu.png)

---

## Display Browsing History

![Display History](/docs/displayhistory.png)

---

## Go Back

![Go Back](/docs/goback.png)

---

## Go Forward

![Go Forward](/docs/forward.png)

---

## Delete URL

![Delete URL](/docs/urldelete.png)

---

# Concepts Demonstrated

- Object-Oriented Programming (OOP)
- Singly Linked List
- Stack
- Dynamic Memory Allocation
- Menu-Driven Programming
- Pointer Manipulation

---

# Time Complexity

| Operation | Complexity |
|-----------|------------|
| Visit Website | O(1) |
| Go Back | O(1) |
| Go Forward | O(1) |
| Display History | O(n) |
| Delete URL | O(n) |

---

#  Learning Outcomes

Through this project, I learned:

- Implementation of a Singly Linked List
- Practical use of Stacks
- Managing dynamic memory using pointers
- Designing a menu-driven console application
- Applying Object-Oriented Programming concepts in C++

---

##  Author

**Ayush Malviya**

Computer Science Engineering Student
