#include <iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int year;
    int interestrate;
    int returnamount;

public:
    BankDeposit() {}
    BankDeposit(int p, float r, int y); // its take the rate of intrest in 0.02
    BankDeposit(int p, int r, int y);   // this constructor takes the rate of intrest in integer
    void showtotalreturn();
};
BankDeposit::BankDeposit(int p, float r, int y) // This constructor will take the value in decimal
{
    principal = p;
    interestrate = r;
    year = y;
    returnamount = principal;
    for (int i = 0; i < y; i++)
    {
        returnamount = returnamount * (1 + interestrate);
    }
}
BankDeposit::BankDeposit(int p, int r, int y) // this constructor will take the intrestrate in integer
{
    principal = p;
    interestrate = float(r)/100;
    year = y;
    returnamount=principal;
    
    for (int i = 0; i < y; i++)
    {
        returnamount = returnamount * (1 + interestrate);
    }
}
void BankDeposit::showtotalreturn()
{
    cout << "principal was  " << principal
         << " return value after " << year << " yearn is " << returnamount << endl;
}

int main()
{
    int y;
    int p;
    float r;
    int R; // this R is the  intrest rate in integer
    cout << "Enter the p r and y " << endl;
    cin >> p>>r >> y;
    BankDeposit bd1, bd2, bd3;
    // bd1 = BankDeposit(p,r,y);
    // bd1.showtotalreturn();

    cout << "Enter the p R and y " << endl;
    cin >> p >> R >> y;
   
    bd2 = BankDeposit(p,r,y);
    bd2.showtotalreturn();
 }