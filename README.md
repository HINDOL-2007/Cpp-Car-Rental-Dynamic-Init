# 🚗 C++ Car Rental Billing System (Dynamic Initialization)

## 📖 About the Project
This project is a C++ console application that simulates a billing system for a car rental agency. It demonstrates the critical transition from static, hardcoded data to **Dynamic Initialization**, where objects are constructed at runtime using live data provided by the user.

To ensure flexibility, the system utilizes constructor overloading to intelligently handle different types of tax rate inputs (both decimal formats and whole integer percentages), proving the program can adapt to different user behaviors on the fly.

## ✨ Features
*   **Dynamic Initialization:** Objects are declared initially as "blank slates" and are dynamically reassigned in memory only after the user inputs their billing data.
*   **Adaptive Constructor Overloading:** Handles floating-point tax rates (e.g., `0.15`) and integer tax rates (e.g., `15%`) seamlessly by routing the input to the appropriate constructor.
*   **Real-time Math Operations:** Automatically calculates subtotals and applies the correct mathematical conversions for percentages before finalizing the bill.
*   **Interactive UI:** Utilizes `cin` and `cout` to create a clear, step-by-step terminal interface tailored for Indian Rupees (INR).

## 🏆 Technical Learnings & Architecture
*   **The Blank Default Constructor:** Proved the necessity of an empty `CarRental()` constructor to reserve object space in memory before runtime data is available.
*   **Type Casting:** Safely converted integer inputs into floating-point decimals (`taxRate = float(t) / 100;`) within the constructor to maintain mathematical accuracy.
*   **Runtime Memory Assignment:** Demonstrated that an instantiated object (`customer1`) can be entirely overwritten with new parameters during program execution (`customer1 = CarRental(d, b, t);`).

## 🧠 Algorithmic Complexity
*   **Time Complexity:** O(1) (Constant Time)
    *   The calculations and object initializations execute in a flat, constant amount of time regardless of the size of the inputs.
*   **Space Complexity:** O(1) (Constant Space)
    *   The application allocates a fixed number of primitive variables and object instances, requiring no dynamically scaling data structures.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** Classes, Dynamic Initialization, Constructor Overloading, Standard I/O, Type Casting.

## 🛠️ How to Run
1. Clone this repository to your local machine.
2. Compile the code using a standard C++ compiler:
   ```bash
   g++ car_rental.cpp -o car_rental
