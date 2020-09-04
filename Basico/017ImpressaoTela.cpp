#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;
using std::setfill;

int main()
{
    cout << setw(9) << setfill('*') << "*";
    cout << "     " << "   ";
    cout << setw(3) << setfill('*') << "*";
    cout << " " << "     " << "  ";
    cout << "*";
    cout << "     " << "  " << "    " ;
    cout << "*" << endl;

    cout << "*" << setw(7) << setfill(' ') << " " << "*";
    cout << "     " << " ";
    cout << "*" << setw(5) << setfill(' ') << " " << "*";
    cout << "     ";
    cout << "***";
    cout << "     " << " " << "   " ;
    cout << "*" << setw(1) << setfill(' ') << " " << "*"<< endl;

    cout << "*" << setw(7) << setfill(' ') << " " << "*";
    cout << "     ";
    cout << "*" << setw(7) << setfill(' ') << " " << "*";
    cout << "     ";
    cout << "*";
    cout << "     " << " " << "   ";
    cout << "*" << setw(3) << setfill(' ') << " " << "*"<< endl;

    cout << "*" << setw(7) << setfill(' ') << " " << "*";
    cout << "     ";
    cout << "*" << setw(7) << setfill(' ') << " " << "*";
    cout << "     ";
    cout << "*";
    cout << "     " << " " << "  ";
    cout << "*" << setw(5) << setfill(' ') << " " << "*"<< endl;

    cout << "*" << setw(7) << setfill(' ') << " " << "*";
    cout << "     " ;
    cout << "*" << setw(7) << setfill(' ') << " " << "*";
    cout << "     ";
    cout << "*";
    cout << "     " << " " << " ";
    cout << "*" << setw(7) << setfill(' ') << " " << "*"<< endl;

    cout << "*" << setw(7) << setfill(' ') << " " << "*";
    cout << "     " ;
    cout << "*" << setw(7) << setfill(' ') << " " << "*";
    cout << "     ";
    cout << "*";
    cout << "     " << " " << "  ";
    cout << "*" << setw(5) << setfill(' ') << " " << "*"<< endl;

    cout << "*" << setw(7) << setfill(' ') << " " << "*";
    cout << "     " ;
    cout << "*" << setw(7) << setfill(' ') << " " << "*";
    cout << "     ";
    cout << "*";
    cout << "     " << " " << "   ";
    cout << "*" << setw(3) << setfill(' ') << " " << "*"<< endl;

    cout << "*" << setw(7) << setfill(' ') << " " << "*";
    cout << "     " << " ";
    cout << "*" << setw(5) << setfill(' ') << " " << "*";
    cout << " " << "     " ;
    cout << "*";
    cout << "     " << " " << "    ";
    cout << "*" << setw(1) << setfill(' ') << " " << "*"<< endl;

    cout << setw(9) << setfill('*') << "*";
    cout << "     " << "   ";
    cout << setw(3) << setfill('*') << "*";
    cout << " " << "     " << "  ";
    cout << "*";
    cout << "     " << " " << "     " ;
    cout << "*" << endl;

    return 0;
}