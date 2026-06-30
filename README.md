# Bank-Management-System
# 🏦 Bank Management System (C++)

A simple console-based **Bank Management System** developed in **C++** using Object-Oriented Programming (OOP). This project allows users to create bank accounts, deposit and withdraw money, search account details, and generate a mini statement.

---

## 📌 Features

- ✅ Create a new bank account
- 💰 Deposit money
- 💸 Withdraw money
- 🔍 Search account by:
  - Account Number
  - Account Holder Name
- 📄 Generate a mini statement (saved as `sample.txt`)
- 🔒 PIN-based authentication for security
- 🏦 Displays account balance

---

## 🛠️ Technologies Used

- **Language:** C++
- **Concepts:**
  - Object-Oriented Programming (Classes & Objects)
  - Vectors
  - File Handling
  - Random Number Generation
  - User Input Validation

---

## 📂 Project Structure

```
BankManagementSystem/
│
├── main.cpp          # Source code
├── sample.txt        # Generated mini statement
└── README.md         # Project documentation
```

---

## 🚀 How It Works

### 1. Create Account
- Enter account holder name
- Deposit an initial amount
- Set a 4-digit PIN
- System generates a random account number

---

### 2. Withdraw Money
- Enter:
  - Account Number
  - Holder Name
  - PIN
- Authentication is verified
- Withdrawal is performed if sufficient balance exists

---

### 3. Deposit Money
- Authenticate using:
  - Account Number
  - Holder Name
  - PIN
- Deposit any amount into the account

---

### 4. Search Account
Users can search using:

- Account Number
- Account Holder Name

After entering the correct PIN, the following details are displayed:

- Account Holder Name
- Account Number
- Current Balance

---

### 5. Generate Mini Statement
The system creates a text file named:

```
sample.txt
```

The file contains:

- Account Holder Name
- Account Number
- Current Balance

---

## 📋 Menu

```
1. Create an Account
2. Withdraw Amount
3. Deposit Amount
4. Search / Display Bank Details
5. Statement / Receipt
6. Exit
```

---

## 🔐 Security

The system uses PIN verification before allowing:

- Withdrawals
- Deposits
- Viewing account details
- Generating statements

---

## 📸 Sample Output

```
===============================
BANK MANAGEMENT SYSTEM
===============================

1. Create an Account
2. Withdraw Amount
3. Deposit Amount
4. Search / Display Bank Details
5. Statement / Receipt
6. Exit

Enter Choice: 1

Enter your Name:
John

Enter Initial Balance:
5000

Your Account No is = 4821

Set PIN:
1234

Account Created Successfully!!
```

---

## ⚠️ Limitations

- Data is stored only during program execution (no permanent database).
- Account numbers are randomly generated and may duplicate.
- Passwords are stored in plain form.
- No transaction history is maintained.
- Supports only basic banking operations.

---

## 🔮 Future Enhancements

- Save account data permanently using files or databases
- Improve account number generation to ensure uniqueness
- Add login system
- Add money transfer between accounts
- Maintain transaction history
- Interest calculation
- Change PIN feature
- Delete account option
- Admin dashboard
- Better input validation
- GUI version using Qt or C#

---

## 🎯 Concepts Demonstrated

- Classes and Objects
- Encapsulation
- Member Functions
- STL Vector
- File Handling
- Random Number Generation
- Conditional Statements
- Loops
- Functions

---

## 👨‍💻 Author

Developed as a C++ Mini Project for learning Object-Oriented Programming and File Handling concepts.

---

## 📜 License

This project is intended for educational purposes and can be modified or extended for learning.
