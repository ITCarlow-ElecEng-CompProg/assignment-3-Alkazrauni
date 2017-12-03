/** Salman Al-kazrauni
 *  c00199530
 *  Exercise 3
 *  Standard Deviation Calculator
 */





#include <iostream>
#include <cmath>

using namespace std;

/**< main function */
int main()
{
    /**< variable decleration */
    double num[10]={0};
    double mean = 0, X =0, sum = 0 , S = 0;
    int i;

    /**< the program title */
    cout << "Standard Deviation Calculator\n" << endl ;

    /**< using for loop to prompt the user to insert the values and to calculat the sum */
    for ( i=0 ; i<10 ; i++)
    {
        cout << "Enter value number " << i+1 << " : ";
        cin >> num[i] ;
        sum += num[i] ;
    }

    /**< calculate the mean */
    mean = sum / 10.0 ;

    /**< using for loop to  */
    for ( i=0 ; i<10 ; i++)
    {
        X += pow( num[i] - mean , 2);
    }

    S = sqrt( X / 9.0);

    cout << "\n\nthe arithmetic mean is : " << mean << endl ;
    cout << "the Standard Deviation is : " << S << endl ;


    return 0;
}
