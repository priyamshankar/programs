#include <iostream>
#include <cmath>
using namespace std;
class direct_mapping

{
    int word_size;
    int cache_block_size;
    int ram_size;
    int ram_arr_size;
    int search;
    int cache_arr[];

public:
    void data_input()
    {
        cache_block_size=100;
        cout << endl
             << endl
             << "****Enter the size of the cache in KB : ";
        cout << "****";
        cin >> cache_block_size;
        cache_block_size = (log(cache_block_size) / log(2)) + 10;
        cout << endl
             << "****Enter the size of main memory in MB : ";
        cin >> ram_size;
        cout << "****";
        ram_size = (log(ram_size) / log(2)) + 20;
        cout << endl
             << "****Enter the word size Bytes : ";
        cin >> word_size;
        cout << "****";
        word_size = (log(word_size) / log(2));
        // ram_arr_size=pow(2,ram_size);
        ram_arr_size=ram_size;
        cache_block_size = (cache_block_size - word_size);
    }
    void display_cache()
    {
        int i;
        cout << endl
             << "               *****";
        for (i = 0; i < cache_block_size; i++)
        {
            cout << cache_arr[i] << "  ";
        }
        cout << "*****";
    }
    void cache_values( int ram_arr[])
    {
        int i;
        for (i = 0; i < cache_block_size; i++)
        {
            cache_arr[i] = i;
            cout << cache_arr[i] << "  ";
        }
        for (i = 0; i < (ram_arr_size); i++)
        {
            ram_arr[i] = i;
        }
    }
    void load_from_ram( int ram_arr[])
    {
        cout << endl
             << "\nLoading the ram blocks to the cache lines";
        int mod_fnc = (search % cache_block_size);
        cache_arr[mod_fnc] = ram_arr[search];
        display_cache();
    }

    void fetch( int ram_arr[])
    {
        cout << "\n Enter the block no. to fetch the data.";
        // int search;
        cin >> search;
        int mod_fnc;
        mod_fnc = (search % cache_block_size);
        if (search == cache_arr[mod_fnc])
        {
            cout << "\n           ****cache hit!!!****";
            display_cache();
        }
        else
        {
            cout << "\n           ****cache miss:(****";
            load_from_ram( ram_arr);
        }
    }
};
int main()
{
    
    int ram_size;
    direct_mapping active;
    // int* size;
    // size = &cache_block_size;
    active.data_input();

    int ram_arr[1000000];
    cout << endl
         << endl
         << "                        ****The default cache size is 32****" << endl
         << endl;
    cout << "To change the default size press **1**.....To continue with the default values press **2**:-->   ";
    int toggle;
    cin >> toggle;
    if (toggle == 2)
    {

        cout << "\n The default lines in the cache are : ";
        active.cache_values(ram_arr);
    }
    if (toggle == 1)
    {
        cout << endl
             << endl
             << "Enter the no. of blocks:-->  ";

        
        cout << endl
             << "The updated cache blocks are:--";
        active.cache_values( ram_arr);
    }
    int toggle2 = 1;
    while (toggle2 != 2)
    {
        active.fetch( ram_arr);
        cout << "\nPress 1 to continue or 2 to leave : ";
        cin >> toggle2;
    }
    return 0;
}