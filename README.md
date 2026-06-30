# 💳 Fraud Transaction Detector (C)

A simple console-based **Fraud Transaction Detector** built using the **C Programming Language**. This project allows users to store transaction IDs, search for suspicious transactions, and maintain a fraud detection log using file handling.

---

## 📌 Overview

The **Fraud Transaction Detector** simulates a basic fraud detection system by allowing users to:

- Enter multiple transaction IDs.
- Store all transaction IDs in a text file.
- Search for a suspicious transaction ID.
- Display whether the transaction exists.
- Save every search result in a fraud log.

This project demonstrates the use of **arrays**, **file handling**, **loops**, **conditional statements**, and **linear search** in C.

---

# ✨ Features

- ✅ Store multiple transaction IDs
- 🔍 Search for suspicious transaction IDs
- 📂 Save transaction records to `transactions.txt`
- 📝 Automatically create and update `fraud_log.txt`
- ⚡ Fast and simple console interface
- 📚 Beginner-friendly project

---

# 🛠️ Technologies Used

- 💻 C Programming
- 📂 File Handling
- 📋 Arrays
- 🔄 Loops
- 🔍 Linear Search
- ⚙️ Standard C Library

---

# 📁 Project Structure

```text
Fraud-Transaction-Detector/
│
├── FTD.c                # Main source code
├── transactions.txt     # Stores transaction IDs
├── fraud_log.txt        # Stores fraud search history
└── README.md
```

---

# 🚀 How It Works

1. Enter the number of transactions.
2. Input all transaction IDs.
3. The program stores them in `transactions.txt`.
4. Enter a suspicious transaction ID.
5. The program searches for the ID.
6. Displays:
   - **Fraud Transaction Found**
   - **Transaction Not Found**
7. Saves the result in `fraud_log.txt`.

---

# 🖥️ Sample Output

```text
Enter number of transactions: 5

Enter 5 transaction IDs:
101
205
309
450
512

Enter suspicious transaction ID to search:
309

Fraud Transaction Found
```

---

# 📂 Generated Files

### transactions.txt

```text
101
205
309
450
512
```

### fraud_log.txt

```text
Searched ID: 309 -> Fraud Transaction Found
Searched ID: 700 -> Transaction Not Found
```

---

# 📖 Concepts Used

- 📌 Arrays
- 📌 User Input
- 📌 File Handling (`fopen`, `fprintf`, `fclose`)
- 📌 Linear Search
- 📌 Conditional Statements
- 📌 Standard C Library

---

# 🎯 Learning Outcomes

This project helps beginners understand:

- Reading user input in C
- Working with arrays
- Implementing searching algorithms
- Creating and writing text files
- Appending data to files
- Building simple real-world applications

---

# 🔮 Future Improvements

- 🚀 Binary Search for faster searching
- 💰 Transaction amount validation
- 📅 Date & Time tracking
- 🔐 Admin authentication
- 📊 CSV database support
- 📋 Menu-driven interface
- ✏️ Update/Delete transactions
- 🤖 Advanced fraud detection rules

---

# 🎓 Suitable For

- 🎓 College Mini Projects
- 💻 C Programming Practice
- 📂 File Handling Practice
- 📚 Data Structures Learning
- 🔍 Fraud Detection System Basics

---

## ⭐ Support

If you found this project useful, please consider giving it a **⭐ Star** on GitHub!
