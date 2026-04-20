#include <iostream>
#include <string>
using namespace std;

// Function declarations
void ChangeCustomerChoice();
void CheckUserPermissionAccess();
void DisplayInfo();int main() {    
  // Main function where program execution begins    
  std::cout << "CS 410 Project One Proficiency Test" << std::endl;    
  // Call the functions    
  ChangeCustomerChoice();    
  CheckUserPermissionAccess();    
  DisplayInfo();    
  return 0;
}
  // ChangeCustomerChoice function
  void ChangeCustomerChoice() {    
    std::cout << "ChangeCustomerChoice function called." << std::endl;    
    int change;    
    string newVal;    
    std::cout << "Enter the number of the client that you wish to change:" << endl;    
    
    // Restrict input to only valid options    
    cin >> change;    
    if (change < 1 || change > 5) { // Adjusted to match the client array size     
      cout << "Incorrect option. Please enter between 1 and 5." << endl;        
      return; // Exit function if input is invalid    
    }
      // Logic to change the customer's choice would go here    
      std::cout << "Changing customer choice..." << endl;
  }

    // CheckUserPermissionAccess function
    void CheckUserPermissionAccess() {    
      std::cout << "CheckUserPermissionAccess function called." << std::endl;    
      
      string inputUser, inputPass;    
      bool status = false; // Variable to track access status    
      const string password = "securePassword"; // Use a more secure password management approach    
          
          // Loop to check user credentials    
          while (!status) {        
            cout << "Enter username:" << endl;        
            cin >> inputUser;                
            
            cout << "Enter password:" << endl;        
            cin >> inputPass;        
            // Check both username and password for security        
            if (inputUser == "validUsername" && inputPass == password) {            
              status = true; // Grant access if both are correct        
              } else {            
                cout << "Invalid credentials. Please try again." << endl;        
              }    
            }
          }
      // DisplayInfo function
      void DisplayInfo() {    
        std::cout << "DisplayInfo function called." << std::endl;    
        
        std::cout << "Client's Name and Service Selected (1 = Brokerage, 2 = Retirement):" << endl;    
        // Example data for demonstration    
        string client[5] = {"Alice", "Bob", "Charlie", "David", "Eve"};    
        int option[5] = {1, 2, 1, 2, 1};    
        
        // Only display information after user credentials are verified    
        for (int i = 0; i < 5; i++) {        
          int listNumber = i + 1;        
          cout << listNumber << ". " << client[i] << " selected option " << option[i] << endl;    
        }
      }
        