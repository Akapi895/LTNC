#include <iostream>

using namespace std;

int calculateFine(int returnedDay, int returnedMonth, int returnedYear,
                   int dueDay, int dueMonth, int dueYear) {
    int fine = 0;

    if (returnedYear > dueYear) {
        fine = 10000; 
    } else if (returnedYear == dueYear) {
        if (returnedMonth > dueMonth) { //fix
            fine = 500 * (returnedMonth - dueMonth); 
        } else if (returnedMonth == dueMonth) {
            
            if (returnedDay > dueDay) {
                fine = 15 * (returnedDay - dueDay);
            }
        }
    }

    return fine;
}

int main() {
    int returnedDay, returnedMonth, returnedYear;
    int dueDay, dueMonth, dueYear;

    cin >> returnedDay >> returnedMonth >> returnedYear;
    cin >> dueDay >> dueMonth >> dueYear;

    int fine = calculateFine(returnedDay, returnedMonth, returnedYear, dueDay, dueMonth, dueYear);

    cout << fine << endl;

    return 0;
}