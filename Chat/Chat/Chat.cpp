#include<iostream>
#include<string>

using namespace std;



// Main Menu
void mainMenu()
{
    cout << "\n\n\n\n\t\t\t**********     Welcome to Spire Health care hospital     **********\n\n\n";
    cout << "\t\t\t\t\t\t1. User Login\n";
    cout << "\t\t\t\t\t\t2. View Company Details\n";
    cout << "\t\t\t\t\t\t3. View Available Doctor's Details\n";
    cout << "\t\t\t\t\t\t4. Manage Doctor's Details\n";
    cout << "\t\t\t\t\t\t5. Manage Doctor Appointments\n";
    cout << "\t\t\t\t\t\t6. Logout\n";
    cout << "\t\t\t\t\t\t7. Exit\n";
    cout << "\t\t\t\t\t\tPlease enter your choice: ";
}




// User Login
void login()
{
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    // Check if the username and password are correct
    if (username == "admin" && password == "password")
    {
        cout << "Login successful!" << endl;
    }
    else
    {
        cout << "Invalid username or password." << endl;
    }
}

// View Company Details
void viewCompanyDetails()
{
    cout << "Company Name:Spire Health Care hospital\n";
    cout << "Company Address: Cardiff 555 Main Street wales\n";
    cout << "Company Phone Number: 555-123-4567\n";
}

// View Available Doctor's Details
void viewDoctorDetails()
{
    cout << "\t\tName: Dr. Smith\n";
    
    cout << "\t\tSpecialty: Pediatrics\n";
    
    cout << "\t\tOffice Hours: 8am - 5pm\n";
    
    cout << "\t\tPhone Number: 555-456-7890\n";

    
    cout << "\t\tName: Dr. Warne\n";
    
    cout << "\t\tSpecialty: Orthopedics\n";
    
    cout << "\t\tOffice Hours: 8am - 4.30pm\n";
    
    cout << "\t\tPhone Number: 551-356-986\n";
    
    
    cout << "\t\tName : Dr. John\n";
    
    cout << "\t\tSpecialty : Neurology\n";
    
    cout << "\t\tOffice Hours: 9am - 3pm\n";
    
    cout << "\t\tPhone Number: 552-777-987\n";
    
    
    cout << "\t\tName : Dr. Steve\n";
    
    cout << "\t\tSpecialty : Cardiology\n";
    
    cout << "\t\toffice Hours: 9am - 12pm\n";
    
    cout << "\t\tPhone Number: 553-564-721\n";
    
    
    cout << "\t\tName : Dr. Anderson\n";
    
    cout << "\t\tSpecialty : Radiology\n";
    
    cout << "\t\tOffice Hours : 9am - 2pm\n";
    
    cout << "\t\tPhone Number : 552-221-431\n";

   
    cout << "\t\tName : Dr. Warner\n";
    
    cout << "\t\tSpecialty : Psychiatry\n";
    
    cout << "\t\tOffice Hours: 8am - 4pm\n";
    
    cout << "\t\tPhone Number : 555-873-095\n";

    
    cout << "\t\tName : Dr. Payne\n";
    
    cout << "\t\tSpecialty : Oncology\n";
    
    cout << "\t\tOffice Hours: 9am - 2pm\n";
    
    cout << "\t\tPhone Number: 556-884-912\n";
    
    
    cout << "\t\tName : Dr. Shane\n";
    
    cout << "\t\tSpecialty : Anesthesiology\n";
    
    cout << "\t\tOffice Hours: 8am - 12pm\n";
    
    cout << "\t\tPhone Number: 555-867=678\n";

}

// Manage Doctor's Details
void manageDoctorDetails()
{
    string name;
    string specialty;
    string hours;
    string phone;

    cout << "Please enter the doctor's name: ";
    cin >> name;

    cout << "Please enter the doctor's specialty: ";
    cin >> specialty;

    cout << "Please enter the doctor's office hours: ";
    cin >> hours;

    cout << "Please enter the doctor's phone number: ";
    cin >> phone;

    cout << "Doctor's details updated successfully!\n";
}

// Manage Doctor Appointments
void manageDoctorAppointments()
{
    string patientName;
    string appointmentTime;

    cout << "Please enter the patient's name: ";
    cin >> patientName;

    cout << "Please enter the appointment time: ";
    cin >> appointmentTime;

    cout << "Appointment added successfully!\n";
}

// Logout
void logout()
{
    cout << "Logout successful!\n";
}

// Exit
void exit()
{
    cout << "Thank you for using this program. Goodbye!\n";
}

int main()
{
    int option;

    do
    {
        mainMenu();
        cin >> option;

        switch (option)
        {
        case 1:
            login();
            break;
        case 2:
            viewCompanyDetails();
            break;
        case 3:
            viewDoctorDetails();
            break;
        case 4:
            manageDoctorDetails();
            break;
        case 5:
            manageDoctorAppointments();
            break;
        case 6:
            logout();
            break;
        case 7:
            exit();
            break;
        default:
            cout << "Invalid option! Please try again.\n";
        }
    } while (option != 7);

    return 0;
}