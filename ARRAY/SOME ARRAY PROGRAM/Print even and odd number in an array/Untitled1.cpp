//find even and odd number in an array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the range of array: ";
    cin>>n;
    int a[n],b[n],c[n],i,j=0,k=0;

    cout<<"Enter the elements of arr: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ////////////////////////////////////////////////////
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }
    /////////////////////////////////////////////////////

    cout<<"The even elements are :";
    for(i=0;i<j;i++)
    {
        cout<<b[i]<<"\t";
    }
    cout<<endl;
      cout<<"The odd elements are :";
    for(i=0;i<k;i++)
    {
        cout<<c[i]<<"\t";
    }
}
/*#include <stdio.h>
int main()
    {

        long int ARR[10], OAR[10], EAR[10];
        int i, j = 0, k = 0, n;

        printf("Enter the size of array AR \nn");
        scanf("%d", &n);

        printf("Enter the elements of the array \nn");
        for (i = 0; i < n; i++)
        {
            scanf("%ld", &ARR[i]);
            fflush(stdin);
        }

for (i = 0; i < n; i++)
        {
            if (ARR[i] % 2 == 0)
            {
                EAR[j] = ARR[i];
                j++;
            }
            else
            {
                OAR[k] = ARR[i];
                k++;
            }
        }

        printf("The elements of OAR are \n");
        for (i = 0; i < k; i++)
        {
            printf("%ldn", OAR[i]);
        }

        printf("The elements of EAR are \n");
        for (i = 0; i < j; i++)
        {
            printf("%ld\n", EAR[i]);
        }

    }*/
