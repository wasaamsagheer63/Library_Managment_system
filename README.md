# 📚 Library Management System

A comprehensive Library Management System built in C++ implementing Object-Oriented Programming principles and 3-Tier Architecture. This project was developed to practice OOP concepts learned in coursework through a real-world application.

## 🎯 Project Overview

This Library Management System demonstrates practical implementation of OOP concepts through a complete library management solution. The system handles user authentication, book management, borrowing operations, and fine notifications using a file-based database approach.

## ✨ Features

### 🔐 Authentication System
- **Admin Login**: Single administrator account
- **Student Authentication**: Multiple student accounts with sign-up and sign-in functionality
- **Role-based Access Control**: Different permissions for admin and students

### 👨‍💼 Admin Features
- **Book Management**
  - Add new books to library inventory
  - Delete books from the system
  - Edit existing book details
- **Student Monitoring**
  - View student borrowing details
  - Track borrowed books and due dates
- **Fine Management**
  - Issue fines to students for overdue books
  - Send fine notifications to students

### 👨‍🎓 Student Features
- **Book Operations**
  - View available book details
  - Borrow books from the library
  - Return borrowed books
- **Notifications**
  - Receive fine notifications from admin
  - View personal borrowing status

## 🏗️ System Architecture

### 3-Tier Architecture Implementation

```
┌─────────────────────────────────┐
│        Presentation Layer       │
│     (User Interface & I/O)      │
├─────────────────────────────────┤
│         Business Layer          │
│    (Core Logic & Operations)    │
├─────────────────────────────────┤
│          Data Layer             │
│    (File-based Database)        │
└─────────────────────────────────┘
```

**Presentation Layer**: Handles user interactions and display
**Business Layer**: Contains core application logic and processing
**Data Layer**: Manages data storage using .txt files

## 🛠️ Technical Implementation

### Object-Oriented Programming
- **Modular Design**: Classes defined in header files (.h) with implementation in source files (.cpp)
- **Encapsulation**: Proper data hiding and access control
- **Code Organization**: Separation of concerns across different layers


```

## 💻 Technologies Used

- **Programming Language**: C++
- **Programming Paradigm**: Object-Oriented Programming
- **Architecture Pattern**: 3-Tier Architecture
- **Database**: File-based storage (.txt files)

## 🚀 Getting Started

### Prerequisites
- C++ Compiler (GCC, MinGW, or Visual Studio)
- Text editor or IDE
   ```

## 📖 Usage

### Admin Operations
1. Login with admin credentials
2. Manage book inventory (add, edit, delete)
3. Monitor student borrowing activities
4. Issue fines and send notifications

### Student Operations
1. Register as new student or login
2. Browse available books
3. Borrow and return books
4. Check notifications and fine status

## 🎯 Learning Objectives Achieved

- **OOP Implementation**: Practical application of object-oriented programming concepts
- **System Architecture**: Understanding and implementation of 3-tier architecture
- **File Handling**: Data persistence using file operations in C++
- **User Management**: Authentication and role-based access control
- **Project Organization**: Modular programming with header and source file separation

## 🔧 System Workflow

1. **User Authentication**: Login/Register based on role (Admin/Student)
2. **Role-based Dashboard**: Different interfaces for admin and student users
3. **Book Operations**: CRUD operations on book inventory
4. **Borrowing System**: Track book borrowing and return dates
5. **Notification System**: Admin-to-student communication for fines
6. **Data Persistence**: All data stored in .txt files for future sessions

## 📊 Database Structure

The system uses text files as database:
- **books.txt**: Stores book information
- **users.txt**: Stores users credentials
- **borrow.txt**: Stores borrow details of books
- **fine.txt**: Store Fines record of student

## 👨‍💻 Author

**Your Name**
- GitHub: github.com/wasaamsagheer63
- LinkedIn: linkedin.com/in/wasaam-sagheer

## 🙏 Acknowledgments

- Developed as part of Object-Oriented Programming coursework
- Thanks to course instructors for guidance on OOP concepts
- Project serves as practical implementation of learned programming principles

---

⭐ **If you found this project helpful, please give it a star!** ⭐
