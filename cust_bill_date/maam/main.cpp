// main.cpp
#include <bits/stdc++.h>
#include "bill.h"

int main() {
    // Create array of 3 Bill objects in heap memory
    Bill* bills = new Bill[3];

    // Switch case variable
    int choice;
    
    // Declare totalAmount outside the switch statement
    int totalAmount;

    do {
        // Display menu
        std::cout << "\nBilling Management System Menu:\n";
        std::cout << "1. Accept details for all bills\n";
        std::cout << "2. Display details for all bills\n";
        std::cout << "3. Calculate total bill amount\n";
        std::cout << "4. Display bill details for a given customer\n";
        std::cout << "5. Search for a bill by bill number\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                // Accept details from user
                for (int i = 0; i < 3; ++i) {
                    std::cout << "Enter details for Bill " << i + 1 << std::endl;
                    bills[i].accept();
                }
                break;

            case 2:
                // Display details using << operator
                for (int i = 0; i < 3; ++i) {
                    std::cout << "Details for Bill " << i + 1 << std::endl;
                    std::cout << bills[i] << std::endl;
                }
                break;

            case 3:
                // Calculate total bill amount
                totalAmount = 0;
                for (int i = 0; i < 3; ++i) {
                    totalAmount += bills[i].getBillAmount();
                }
                std::cout << "Total Bill Amount: $" << totalAmount << std::endl;
                break;

            case 4:
                // Display bill details for a given customer
                try {
                    char searchName[100];
                    std::cout << "Enter customer name to search: ";
                    std::cin.ignore(); // Ignore newline character from previous input
                    std::cin.getline(searchName, 100);

                    bool customerFound = false;
                    for (int i = 0; i < 3; ++i) {
                        if (strcmp(bills[i].getCustomerInfo().getCustomerName(), searchName) == 0) {
                            std::cout << "Details for customer " << searchName << ":" << std::endl;
                            std::cout << bills[i] << std::endl;
                            customerFound = true;
                            break;
                        }
                    }

                    if (!customerFound) {
                        throw std::runtime_error("Customer not found.");
                    }
                } catch (const std::exception& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                }
                break;

            case 5:
                // Search for a bill by bill number
                try {
                    int searchBillNumber;
                    std::cout << "Enter bill number to search: ";
                    std::cin >> searchBillNumber;

                    bool billFound = false;
                    for (int i = 0; i < 3; ++i) {
                        if (bills[i].getBillNumber() == searchBillNumber) {
                            std::cout << "Details for bill number " << searchBillNumber << ":" << std::endl;
                            std::cout << bills[i] << std::endl;
                            billFound = true;
                            break;
                        }
                    }

                    if (!billFound) {
                        throw std::runtime_error("Bill not found.");
                    }
                } catch (const std::exception& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                }
                break;

            case 0:
                // Exit the program
                std::cout << "Exiting the Billing Management System. Goodbye!\n";
                break;

            default:
                std::cerr << "Invalid choice. Please enter a valid option.\n";
                break;
        }
    } while (choice != 0);

    // Free memory
    delete[] bills;

    return 0;
}
