#include<iostream>  
using namespace std;  
int main ()  
{    
    int myarray[14] = { 70, 105, 108, 105, 112, 32, 68, 117, 99, 101, 118, 115, 107, 105 };   //Vo ovaa redica imame 14 elementi koj go pretstavuvaat ASCII kodot za sekoja bukva vo imeto Filip Ducevski.
       
    cout<<"\nInput list is \n";
    for(int i=0;i<14;i++)  
    {  
        cout << (char)myarray[i] << "\t";  
    }    
    for(int k=1; k<14; k++)   
    {  
        int temp = myarray[k];  
        int j= k-1;  
        while(j>=0 && temp <= myarray[j])  //Potoa koristime  loop za  da  gi ispecatime znacite sto odgovaraat na sekoj elemnt.
        {  
            myarray[j+1] = myarray[j];   
            j = j-1;  
        }  
        myarray[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<14;i++)  
    {  
        cout << (char)myarray[i] << "\t";  //I na krajot ja pecati podredenata lista na znaci.
    }  
}