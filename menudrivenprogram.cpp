#include <iostream>
using namespace std;

int main() {
    int m, n;
    float a[10][10], b[10][10], c[10][10];
    int choice;
    char ch;

    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    do {
        cout << "\nMENU\n";
        cout << "1. Enter first matrix\n";
        cout << "2. Enter second matrix\n";
        cout << "3. Display matrices\n";
        cout << "4. Add matrices\n";
        cout << "5. Transpose matrices\n";
        cout << "6. Inverse of first matrix (2x2)\n";
        cout << "7. Check identity matrix (first matrix)\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "\n Enter First Matrix\n";
                for(int i = 0; i < m; i++)
                    for(int j = 0; j < n; j++)
                        cin >> a[i][j];
                break;

            case 2:
                cout << "\n Enter Second Matrix\n";
                for(int i = 0; i < m; i++)
                    for(int j = 0; j < n; j++)
                        cin >> b[i][j];
                break;

            case 3:
                cout << "\n: Display Matrices\n";
                cout << "First Matrix:\n";
                for(int i = 0; i < m; i++) {
                    for(int j = 0; j < n; j++)
                        cout << a[i][j] << " ";
                    cout << endl;
                }
                cout << "Second Matrix:\n";
                for(int i = 0; i < m; i++) {
                    for(int j = 0; j < n; j++)
                        cout << b[i][j] << " ";
                    cout << endl;
                }
                break;

            case 4:
                cout << "\n: Addition of Matrices\n";
                for(int i = 0; i < m; i++)
                    for(int j = 0; j < n; j++)
                        c[i][j] = a[i][j] + b[i][j];
                for(int i = 0; i < m; i++) {
                    for(int j = 0; j < n; j++)
                        cout << c[i][j] << " ";
                    cout << endl;
                }
                break;

            case 5:
                cout << "\n: Transpose of Matrices\n";
                cout << "Transpose of First Matrix:\n";
                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < m; j++)
                        cout << a[j][i] << " ";
                    cout << endl;
                }
                cout << "Transpose of Second Matrix:\n";
                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < m; j++)
                        cout << b[j][i] << " ";
                    cout << endl;
                }
                break;

            case 6:
                cout << "\nInverse of First Matrix\n";
                if(m == 2 && n == 2) {
                    float det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
                    if(det != 0) {
                        cout << a[1][1]/det << " " << -a[0][1]/det << endl;
                        cout << -a[1][0]/det << " " << a[0][0]/det << endl;
                    } else {
                        cout << "Inverse not possible\n";
                    }
                } else {
                    cout << "Only 2x2 matrix allowed\n";
                }
                break;

            case 7:
                cout << "\n Check Identity Matrix\n";
                if(m != n) {
                    cout << "Not an identity matrix\n";
                    break;
                }
                bool id;
                id = true;
                for(int i = 0; i < m; i++)
                    for(int j = 0; j < n; j++)
                        if((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
                            id = false;
                if(id)
                    cout << "Identity matrix\n";
                else
                    cout << "Not an identity matrix\n";
                break;

            case 8:
                return 0;

            default:
                cout << "Invalid choice\n";
        }

        cout << "\nDo you want to continue (y/n): ";
        cin >> ch;

    } while(ch == 'y' || ch == 'Y');

    return 0;
}
