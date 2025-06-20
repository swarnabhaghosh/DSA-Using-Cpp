#include <iostream>
using namespace std;

int main()
{
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // for(int i=1; i<=4; i++){
    //     for(int j=1; j<=4; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // A B C D
    // A B C D
    // A B C D
    // A B C D
    // for(int i=1; i<=4; i++){
    //     for(int j=1; j<=4; j++){
    //         cout<<(char)(64+j)<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1 2 3
    // 4 5 6
    // 7 8 9
    // int x=1;
    // for(int i=1; i<=3; i++){
    //     for(int j=1; j<=3; j++){
    //         cout<<x<<" ";
    //         x++;
    //     }
    //     cout<<endl;
    // }


    // lower-left trianlge
    // * 
    // * *
    // * * *
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // upper-left triangle
    // * * * 
    // * *
    // *
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = i; j <=n; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // sidewise reverse traingle
    //   *
    //  **
    // ***
    // for(int i=1; i<=3; i++){
    //     for(int j=i; j<=3; j++){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=i; k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    //    * 
    //   * *
    //  * * *
    // for(int i=1; i<=3; i++){
    //     for(int j=i; j<=3; j++){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=i; k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

   
    // 1 
    // 2 2
    // 3 3 3
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }



    // A 
    // B B
    // C C C
    // D D D D
    // E E E E E
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<(char)(64+i)<<" ";
    //     }
    //     cout<<endl;
    // }



    // 1 
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }



    // A 
    // A B
    // A B C
    // A B C D
    // A B C D E
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<(char)(64+j)<<" ";
    //     }
    //     cout<<endl;
    // }

    // Reverse triangle
    // 1 
    // 2 1 
    // 3 2 1
    // 4 3 2 1
    // for(int i=1; i<=4; i++){
    //     for(int j=i; j>=1; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }



    // Floyd's triangle pattern
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // int x=1;
    // for(int i=1; i<=4; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << x <<" ";
    //         x++;
    //     }
    //     cout<<endl;
    // }


    // Floyd's triangle pattern, character version
    // A 
    // B C
    // D E F
    // G H I J
    // char x='A';
    // for(int i=1; i<=4; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << x <<" ";
    //         x++;
    //     }
    //     cout<<endl;
    // }

    

    return 0;
}