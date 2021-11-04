#include <iostream>
using namespace std;

int main(){

string atas[7] = {"No", "Data 1", "Data 2", "Data 3", "Data 4", "\tJumlah", "Rerata"};
int a[3][5] = {{1,6,4,4,4},{2,7,8,2,6},{3,5,8,6,3}}, x, y, b, c;
float rerata, jumlah;
string bawah[2][5] = {{"Jumlah"},{"Rerata"}}; 

for ( x = 0; x < 7; x++)
{
    cout << atas[x] << "\t";
}
cout << endl;

for (x = 0; x < 3; x++)
{
    for ( y = 0; y < 7; y++)
    {
        switch (y)
        {
        case 5:
            jumlah = 0;
            for ( c = 1; c < 5; c++)
            {
                jumlah += a[x][c];  
            }    
            cout << "\t" << jumlah;
            break;
        case 6:
            jumlah = 0;
            for ( c = 1; c < 5; c++)
            {
                jumlah += a[x][c];
            }
            rerata = jumlah / 4;
            cout << "\t" << rerata;
            break;
        default:
            cout << a[x][y] << "\t" ;
            break;
        }
        
        // if (y == 4)
        // {

        //     jumlah = 0;
        //     for ( c = 1; c < 5; c++)
        //     {
        //         jumlah += a[x][c];  
        //     }    
        //     cout << "\t" << jumlah;

        // } else if (y == 5)
        // {
        //     jumlah = 0;
        //     for ( c = 1; c < 5; c++)
        //     {
        //         jumlah += a[x][c];
        //     }
        //     cout << jumlah/4;
        // }
        
        
        
    }
    cout << endl;
}

// for ( x = 0; x < 2; x++)
// {
//     for ( y = 1; y < 4; y++)
//     {
//         int jumlah ;
//         jumlah = to_string();
//     }
    
// }

cout << "\nJumlah";
for ( x = 1; x < 5; x++)
{
    jumlah = 0;
    for ( y = 0; y < 3; y++)
    {
        jumlah += a[y][x];
    }
    cout << "\t" << jumlah;
}

cout << "\nRerata";
for ( x = 1; x < 5; x++)
{
    jumlah = 0;
    for ( y = 0; y < 3; y++)
    {
        jumlah += a[y][x];
    }
    cout << "\t" << jumlah/3;
}
return 0;


}