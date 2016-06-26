#include <iostream>
#include <math.h>

using namespace std;


int main() {
    int p,r = 0; // declaring variables

    cout << "Enter prime number" <<  endl;
    cin >> p;
    for(int i=2;i<=p/2;++i) // this checks to see if number input is prime, if it isnt it closes the program
    {
        if(p%i==0)
        {
            cout << "Input not prime... Restart and put in a prime number" << endl;
            return 0;
        }
    }
    cout << "User Prime number is: " << p << endl;

    cout << "Enter primitive root that you want to use: " << endl;
    cin >> r;
    cout << "User Primitive Root is :" << r << endl;

    double AlicePrivateKey = 0; // variable declaration
    double BobPrivateKey = 0; // variable declaration

    cout << "Enter Alice's private key" << endl;
    cin >> AlicePrivateKey; // accept variable

    cout << "Alice Private key is:" << AlicePrivateKey << endl;

    cout << "Enter Bob's private key" << endl;
    cin >> BobPrivateKey;// accept input variable

    cout << "Bob's Private key is:" << BobPrivateKey << endl;

    double x,y = 0; // variable declaration


    // used fmod for double size which I thought i needed but I actually dont same as doing just % really
    x = fmod(pow(r,AlicePrivateKey),p); // calculating x = r^a mod p as given in instructions
    y = fmod(pow(r,BobPrivateKey),p); // calculation y = r^b mod p as given in instructions

    cout << "Alice's Public Key is: " << x << endl;
    cout << "Bob's Public Key is: " << y << endl;
    double temp; // temp variable to swap values with
    temp = x;
    x = y; // swaping values
    y = temp;// same as above
    cout << "Alice's Swapped Public Key is: " << x << endl;
    cout << "Bob's Swapped Public key is: " << y << endl;

    double Kb, Ka = 0;

    Ka = fmod(pow(x,AlicePrivateKey),p); // calculation ka = y^a mod p as given in instructions
    Kb = fmod(pow(y,BobPrivateKey),p); // calculating kb = x^b mod p

    cout << "Alice's Shared Key: " << Ka << endl;
    cout << "Bob's Shared Key: " << Kb << endl;

    if(Kb == Ka) // make sure the two values actually match
    {
        cout << "Keys Match!! WOHOO" << endl;
    }



    return 0;
}