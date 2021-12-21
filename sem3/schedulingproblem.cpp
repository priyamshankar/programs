
// Point to be noted round robin may not work at times, try once again it will work
// Burst time is taken our randomly.


#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

// Function to calculate a proper qantum for the round robin method.
double minimum_burst(vector<double> burst)
{
   double min = burst[0];
   for (int i = 1; i < burst.size(); i++)
   {
      if (min < burst[i])
         min = burst[i];
   }
   return min;
}

// Function to calculate the round robin scheduling.
void calculate_round_robin(vector<double> burst)
{
   vector<double> turnAround, copy_burst;
   for (int i = 0; i < burst.size(); i++)
   {
      turnAround.push_back(0);
      copy_burst.push_back(burst[i]);
   }

   double quantum = minimum_burst(burst)/2.0;

   int i = 0, counter = 1, j = 0;
   while(burst[burst.size()-1]>=0)
   {
      if(burst[i]>=0)
      {
         burst[i] = burst[i] - quantum;
         if(burst[i]<=0)
         {
            turnAround[j] = counter*quantum;
            j++;
         }
         i++;
         if(i == burst.size())
            i = 0;
      }
      counter++;
   }

   double totalWait = 0, throuhput = 0;

   for (int i = 0; i < burst.size(); i++)
   {
      totalWait = totalWait+(turnAround[i] - copy_burst[i]);
      throuhput = throuhput + turnAround[i];
   }


   cout<<"The average waiting time for the round round robin : "<<totalWait/burst.size()<<endl;
   cout<<"The average throughput time for the round round robin : "<<throuhput/burst.size()<<endl;

}


void swap(double *xp, double *yp)
{
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
vector<double> bubbleSort(vector<double> arr)
{
   int n = arr.size();
    int i, j;
    for (i = 0; i < n-1; i++)    
     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
   
   return arr;
}


// Function to calculate sjf preemptive method.
void calculate_sjf_preemptive(vector<double> burst)
{
   burst = bubbleSort(burst);
   double waitingTime = 0, totalTime = 0;
   int i;
   for (i = 0; i < burst.size() - 1; i++)
   {
      totalTime = totalTime + burst[i];
      waitingTime = waitingTime + burst[i];
   }
   totalTime = totalTime + burst[i];

   cout << "The average throughput time for sjf :" << totalTime / burst.size() << endl;
   cout << "The average waiting time for sjf :" << waitingTime / burst.size() << endl;
}

// The function to calculate fcfs scheduling .
void calculate_fcfs(vector<double> burst)
{
   double waitingTime = 0, totalTime = 0;
   int i;
   for (i = 0; i < burst.size() - 1; i++)
   {
      totalTime = totalTime + burst[i];
      waitingTime = waitingTime + burst[i];
   }
   totalTime = totalTime + burst[i];

   cout << "The average throughput time for fcfs :" << totalTime / burst.size() << endl;
   cout << "The average waiting time for fcfs :" << waitingTime / burst.size() << endl;
}

void calculate_sjf_non_preemptive(vector<double> burst)
{
   double waitingTime = 0, totalTime = 0;
   int i;
   for (i = 0; i < burst.size() - 1; i++)
   {
      totalTime = totalTime + burst[i];
      waitingTime = waitingTime + burst[i];
   }
   totalTime = totalTime + burst[i];

   cout << "The average throughput time for sjf non preemptive :" << totalTime / burst.size() << endl;
   cout << "The average waiting time for sjf non preemptive :" << waitingTime / burst.size() << endl;
}

// Function to calculate whether the given burst time is taken in
// priority or not.
bool taken(vector<double> elements, double search)
{
   for (int i = 0; i < elements.size(); i++)
   {
      if (search == elements[i])
         return true;
   }
   return false;
}

// Function to calculate priority scheduling.
void calculate_priority(vector<double> burst)
{
   // To store burst time of all the process which are to be executed.
   vector<double> values;

   double input, totalTime = 0, waitingTime = 0;

   while (values.size() != burst.size())
   {
      cout << "Enter the priority number:" << endl;
      cin >> input;
      if (taken(values, input))
      {
         cout << "Input already taken";
         continue;
      }
      else
      {
         values.push_back(input);
         totalTime = totalTime + burst[input - 1];
      }
   }
   // loop to calculate waiting time.
   for (int i = 0; i < burst.size() - 1; i++)
   {
      waitingTime = waitingTime + burst[i];
   }
   cout << "The average throughput time for priority :" << totalTime / burst.size() << endl;
   cout << "The average waiting time for priority :" << waitingTime / burst.size() << endl;
}
void findWaitingTime(int processes[], int n,
                     int bt[], int wt[])
{
    wt[0] = 0;

    for (int i = 1; i < n; i++)
        wt[i] = bt[i - 1] + wt[i - 1];
}

// Function to calculate turn around time
void findTurnAroundTime(int processes[], int n,
                        int bt[], int wt[], int tat[])
{

    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}

void findavgTime(int processes[], int n, int bt[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;


    findWaitingTime(processes, n, bt, wt);

    findTurnAroundTime(processes, n, bt, wt, tat);

    cout << "Processes "
         << " Burst time "
         << " Waiting time "
         << " Turn around time\n";

    
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << i + 1 << "\t\t" << bt[i] << "\t "
             << wt[i] << "\t\t " << tat[i] << endl;
    }

    cout << "Average waiting time = "
         << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "
         << (float)total_tat / (float)n;
}


int main()
{

   srand(time(0));
   int number_of_processes = 1 + (rand() % 25);

   vector<double> burst_times;

   for (int i = 0; i < number_of_processes; i++)
   {
      int time = 1 + (rand() % 15);
      burst_times.push_back(time);
   }
int i=0;
    int total_process;
    srand(time(0));
    total_process = rand() % 20;
    // total_process=10;
    int processes[total_process];
    for (i = 0; i < total_process; i++)
    {
        processes[i] = i;
        // cout<<processes[i]<<endl;
    }
    // int processes[] = { 1, 2, 3};
    // int n = sizeof processes / sizeof processes[0];
// cout<<"hello";
int burst_time_counter=0;
    int burst_time[total_process];
    for (i = 0; i < total_process;i++)
    {
        // srand(time(+1));
        burst_time[i] = rand() % 20;
        // cout<<burst_time[i]<<endl;
        burst_time_counter=burst_time[i]+burst_time_counter;

    }
    // int  burst_time[] = {10, 5, 8};

    findavgTime(processes, total_process, burst_time);
    cout<<endl<<"Throughput="<<burst_time_counter/total_process;


   calculate_sjf_preemptive(burst_times);
   calculate_sjf_non_preemptive(burst_times);
   calculate_round_robin(burst_times);
   calculate_fcfs(burst_times);


   return 0;
}