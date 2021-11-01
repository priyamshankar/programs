#include <iostream>
using namespace std;
void display_cache(int cache_arr[], int cache_block_size)
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
void cache_values(int cache_block_size, int chache_arr[], int ram_arr[])
{
    int i;
    for (i = 0; i < cache_block_size; i++)
    {
        chache_arr[i] = i;
        cout << chache_arr[i] << "  ";
    }
    for (i = 0; i < (cache_block_size * cache_block_size); i++)
    {
        ram_arr[i] = i;
    }
}
void load_from_ram(int cache_arr[], int ram_arr[], int cache_block_size, int search)
{
    cout << endl
         << "\nLoading the ram blocks to the cache lines";
    int mod_fnc = (search % cache_block_size);
    cache_arr[mod_fnc] = ram_arr[search];
    display_cache(cache_arr, cache_block_size);
}

void fetch(int cache_arr[], int ram_arr[], int cache_block_size)
{
    cout << "\n Enter the block no. to fetch the data.";
    int search;
    cin >> search;
    int mod_fnc;
    mod_fnc = (search % cache_block_size);
    if (search == cache_arr[mod_fnc])
    {
        cout << "\n           ****cache hit!!!****";
        display_cache(cache_arr,cache_block_size);
    }
    else
    {
        cout << "\n           ****cache miss:(****";
        load_from_ram(cache_arr, ram_arr, cache_block_size, search);
    }
}

int main()
{
    int cache_block_size = 10;
    int cache_arr[cache_block_size];
    int ram_arr[cache_block_size * cache_block_size];
    cout << endl
         << endl
         << "                        ****The default cache size is 10****" << endl
         << endl;
    cout << "To change the default size press **1**.....To continue with the default values press **2**:-->   ";
    int toggle;
    cin >> toggle;
    switch (toggle)
    {
    case 2:
        cout << "\n The default lines in the cache are : ";
        cache_values(cache_block_size, cache_arr, ram_arr);
        break;
    case 1:
        cout << endl
             << endl
             << "Enter the no. of blocks:-->  ";
        cin >> cache_block_size;
        cout << endl
             << "The updated cache blocks are:--";
        cache_values(cache_block_size, cache_arr, ram_arr);

    default:
        break;
    }
    int toggle2=1;
    while (toggle2 !=2)
    {
        fetch(cache_arr, ram_arr, cache_block_size);
        cout << "\nPress 1 to continue or 2 to leave : ";
        cin >> toggle2;
    }
    return 0;
}