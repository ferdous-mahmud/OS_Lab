// FCFS(First Come, First Served) cpu sheduling algorithm

//     #Given : n processes & their brust times

//     #TO_Find : Average waithing time & Average turn arround time

//     #Terms :
//         Completion Time: Time at wihich process completes its execution
//         Turn Arround Time = Completion Time - Arrivl time
//         Waiting Time = Turn Arround Time - Brust Time

#include <bits/stdc++.h>
using namespace std;

vector<int> findWT(vector<int> bt) {
  vector<int> wt = {0};

  for (int i = 1; i < bt.size(); i++) {
    wt.push_back(bt[i - 1] + wt[i - 1]);
  }

  return wt;
}

vector<int> findTAT(vector<int> wt, vector<int> bt) {
  vector<int> tat;

  for (int i = 0; i < bt.size(); i++) {
    tat.push_back(wt[i] + bt[i]);
  }

  return tat;
}

void printAvg(vector<int> vec, string msg) {
  int total = 0;
  for (int x : vec) {
    total += x;
  }

  cout << "Avarage " << msg << " = " << total / vec.size() << endl;
}

int main() {

  freopen("output.txt", "w", stdout);

  vector<string> processes = {"P1", "P2", "P3"};
  vector<int> brust_time = {24, 3, 4};
  vector<int> wt;
  vector<int> tat;

  wt = findWT(brust_time);
  tat = findTAT(wt, brust_time);

  cout << "Process BT   WT    TAT " << endl;
  cout << "-----------------------" << endl;
  for (int i = 0; i < wt.size(); i++) {
    cout << processes[i] << "      " << brust_time[i] << "    " << wt[i]
         << "    " << tat[i] << endl;
  }

  printAvg(wt, "Waiting Time");
  printAvg(tat, "Turn Arround Time");
  return 0;
}