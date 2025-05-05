#include <iostream>
using namespace std;

class mahasiswa // membuat kelas 
{
    public :
    int nim;
    void showNim()
    {
        cout << "no induk =" << nim << endl;
    }
};

int main()
{
    mahasiswa *mhs = new mahasiswa{1};// membuat pointer object mhs
    mhs -> nim = 2;
    mhs -> showNim();
    delete mhs;
    return 0;
}
