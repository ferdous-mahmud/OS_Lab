// FCFS(First Come, First Served) cpu sheduling algorithm

//     #Given : n processes & their brust times

//     #TO_Find : Average waithing time & Average turn arround time

//     #Terms :
//         Completion Time: Time at wihich process completes its execution
//         Turn Arround Time = Completion Time - Arrivl time
//         Waiting Time = Turn Arround Time - Brust Time

#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  vector<string> processes = {"p1", "p2", "p3"};
  vector<int> brust_time = {24, 3, 4};

  cout << processes[1] << brust_time[2];

  return 0;
}