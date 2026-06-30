# FRAUD-TRANSACTION-DETECTION
📌 Overview

The Fraud Transaction Detector is a simple console-based C application that simulates a basic fraud detection system for transaction IDs.

The program allows users to enter multiple transaction IDs, stores them in a text file, searches for a suspicious transaction ID, and records every search in a fraud log for future reference.

This project demonstrates the use of arrays, file handling, loops, conditional statements, and searching algorithms in the C programming language.

✨ Features

✅ Store multiple transaction IDs

✅ Search for a suspicious transaction ID

✅ Detect whether the transaction exists

✅ Save all transactions into transactions.txt

✅ Automatically create a fraud search log

✅ Maintain search history in fraud_log.txt

✅ Simple and user-friendly console interface

🛠️ Technologies Used
💻 C Programming
📂 File Handling
📋 Arrays
🔄 Loops
🔍 Linear Search
⚙️ Standard C Library
📁 Project Structure
Fraud-Transaction-Detector/
│
├── FTD.c                # Main source code
├── transactions.txt     # Stores transaction IDs
├── fraud_log.txt        # Stores fraud search history
└── README.md
🚀 How It Works
Enter the number of transactions.
Input all transaction IDs.
The program stores all IDs in transactions.txt.
Enter the suspicious transaction ID.
The program searches for the transaction.
If found:
Displays "Fraud Transaction Found"
Otherwise:
Displays "Transaction Not Found"
Saves the search result into fraud_log.txt.
🖥️ Sample Output
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
📂 Generated Files
transactions.txt
101
205
309
450
512
fraud_log.txt
Searched ID: 309 -> Fraud Transaction Found
Searched ID: 700 -> Transaction Not Found
🎯 Concepts Demonstrated
Arrays
User Input
File Handling (fopen, fprintf, fclose)
Linear Search
Conditional Statements
Functions from the Standard C Library
Basic Fraud Detection Simulation
📚 Learning Objectives

This project helps beginners understand:

How to read user input in C
How to work with arrays
How to search data efficiently
How to create and write text files
How to append logs to an existing file
Basic real-world transaction monitoring concepts
