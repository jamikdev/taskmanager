<img width="530" height="530" alt="Q2fvqHvKk143zJ7aa8jDM75hH6w" src="https://github.com/user-attachments/assets/34270cf3-85ae-4f8a-961a-e1b204a188fa" />


# Jamikdev Task Manager

A minimal, terminal-based CLI application built in C++ for managing personal tasks. 

This project serves as a practical implementation of fundamental software engineering concepts, specifically focusing on data persistence and standard container manipulation.

## Core Features
* Persistent Storage: Implements file input and output streams to save tasks locally upon program termination and automatically reload them on startup.
* Stream Integrity: Uses state checking to verify file availability before performing operations, ensuring robust execution.
* Stream Management: Handles whitespace input seamlessly using line-based reading functions instead of standard extraction operators.

## Technical Implementation
* File I/O: Utilizes the input file stream and output file stream libraries to maintain data between sessions.
* Data Structures: Employs dynamic arrays to hold and manage string sequences in memory efficiently.
* Flow Control: Utilizes range-based loops and conditional validation to process collections cleanly.
