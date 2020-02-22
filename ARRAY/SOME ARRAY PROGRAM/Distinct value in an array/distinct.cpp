#include <iostream>
using namespace std;

int main()
{
    int temp;

    int array1[] = {10,2,5,4,10,5,6,9,8,10};
    int array2[11]={0};

    for(int i = 1; i <= 10; i++)
    {
            temp = array1[i-1];

            for(int j = 1; j <= 10; j++)
            {
                    if(temp == array2[j])
                    {
                            cout << "Duplicate " << temp << endl;
                            i++;
                            break;
                    }
            }

            array2[i] = array1[i-1];
    }

    for(int k = 1; k <= 10; k++)
            cout << array2[k] << "  ";

}
